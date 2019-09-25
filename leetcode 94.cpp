/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
   vector<int>v;
void inorder(TreeNode*root){
	if(root==NULL){
		return;
	}
	if(root->left!=NULL){
		inorder(root->left);
	}
	v.push_back(root->val);
	if(root->right!=NULL){
		inorder(root->right);
	}
}
vector<int> inorderTraversal(TreeNode* root) {
    inorder(root);
    return v;
}
};