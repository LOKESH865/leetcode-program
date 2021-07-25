#include<iostream>
using namespace std;
class Solution {
public:
	int height(TreeNode* root){
		if(!root){
			return 0;
		}
		return 1 + max(height(root -> left), height(root -> right));
	}
	bool isBalanced(TreeNode* root) {
		if(!root){
			return true;
		}
		else{
			int leftH = height(root -> left);
			int rightH = height(root -> right);
			return abs(rightH - leftH) <= 1 && isBalanced(root -> left) && isBalanced(root -> right);   
		} 
	}
};
