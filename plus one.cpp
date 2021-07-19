#include<iostream>
using namespace std;
class Solution
 {
public:
    vector<int> plusOne(vector<int>& digit) {
        int n=digit.size()-1;
        while(n>=0&&digit[n]==9){
            digit[n]=0;
            n--;
        }
        if(n==-1)digit.insert(digit.begin(),1);
        else digit[n]++;
        return digit;
        
    }
};
