#include<iostream>
using namespace std;

class Solution {
public:
    int reverse(int M) {
        int rev = 0;
        while (M != 0) {
            int pop = M % 10;
            M /= 10;
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
            rev = rev * 10 + pop;
        }
        return rev;
    }
};
