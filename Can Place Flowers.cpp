#include<iostream>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count{0};
int flag{0};

    for(auto x:flowerbed)
    {
        if(x==0) count++;
        else {
            if(flag ==0) n=n-(count/2);
            else n = n- ((count-1)/2);
            count=0;
            if(n<=0) return 1;
            flag = 1;
        }
    }
    if(count>0 && flag==0) n=n- ((count+1)/2);
    else if(count >0) n= n-((count)/2);
    
    return (n<= 0);
}
};
