#include<iostream>
using namespace std;
class Solution {
public:
    bool isUgly(int n) {
        
        if(!n) return false;
        while(n != 1){
            if(!(n % 2)) n /= 2;
            else if(!(n % 3)) n /= 3;
            else if(!(n % 5)) n /= 5;
            else return false;
        }
return true;        
    }
};
