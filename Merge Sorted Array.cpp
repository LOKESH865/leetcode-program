
#include<iostream>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0;
        for(int i=m;i<m+n;i++){
            
            nums1[i]=nums2[j++];
            
        }
        for(int i=0;i<n;i++) nums2.pop_back();
        sort(nums1.begin(),nums1.end());
    }
};
