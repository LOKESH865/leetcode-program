#include<iostream>
using namespace std;
class Solution {
public:
    int target;
    bool has_path(TreeNode* root,int sum) {
        if (root->left==NULL && root->right==NULL) return (sum+root->val==target);
        if (root->left==NULL && root->right!=NULL) 
            return has_path(root->right,sum+root->val);
        if (root->right==NULL && root->left!=NULL) 
            return has_path(root->left,sum+root->val);
        return has_path(root->left,sum+root->val)
            || has_path(root->right,sum+root->val);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root==NULL) return false;
        target = targetSum;
        return has_path(root,0);
    }
};
