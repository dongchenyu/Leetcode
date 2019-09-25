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
void order(TreeNode*root,int sum){
	if(root->left==NULL&&root->right==NULL){
        sum+=root->val;
		v.push_back(sum);
	}
	if(root->left!=NULL){
		order(root->left,sum+root->val);
	}
	if(root->right!=NULL){
		order(root->right,sum+root->val);
	}
}
bool find(vector<int>v,int sum){
	int len=v.size();
	for(int i=0;i<len;i++){
		if(sum==v[i]){
			return true;
		}
	}
	return false;
}
bool hasPathSum(TreeNode* root, int sum) {
	if(root==NULL){
		return false;
	}
    order(root,0);
    return find(v,sum);
}
};