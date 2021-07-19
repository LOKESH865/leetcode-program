#include<iostream>
using namespace std;
class Solution 
{
public:
    int maxSubArray(vector<int>& nums) 
	{
        int sum = 0;
        int maxSum = INT_MIN;
        
        for(auto n: nums) {
            if (sum < 0) sum = 0;
            sum += n;
            maxSum = max(sum, maxSum);
        }
        return maxSum;
    }
};
