#include<iostream>
using namespace std;
class Solution {
public:
    int minDepth(TreeNode* root) {
      
        if (root==NULL) return 0;
        if (root->left==NULL) return minDepth(root->right) + 1;
        if (root->right==NULL) return minDepth(root->left) + 1;
        int left = minDepth(root->left);
        int right = minDepth(root->right);
        return min(left,right) +1;
    }
};

