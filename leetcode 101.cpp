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
 bool isSymmetric(TreeNode* root) {
    if (root == NULL) { return true; }
        return isSymmetric(root->right, root->left);
}
bool isSymmetric(TreeNode*left,TreeNode*right){
	if(left==NULL&&right==NULL){
		return true;
	}
	if(left!=NULL&&right==NULL){
		return false;
	}
	if(left==NULL&&right!=NULL){
		return false;
	}
	if(left->val!=right->val){
		return false;
	}
	if(isSymmetric(right->left,left->right)==false){
		return false;
	}
	if(isSymmetric(right->right,left->left)==false){
		return false;
	}
	return true;
}
};