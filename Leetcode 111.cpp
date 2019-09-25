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
    int minDepth(TreeNode* root) {
        queue<TreeNode*>q;
    if(root==NULL){
    	return 0;
	}
    q.push(root);
    int layer=1;
    while(!q.empty()){
    	int len=q.size();
    	for(int i=0;i<len;i++){
    		TreeNode*top=q.front();
    		q.pop();
    		if(top->left!=NULL){
    			q.push(top->left);	
			}
			if(top->right!=NULL){
				q.push(top->right);
			}
    		if(top->left==NULL&&top->right==NULL){
    			return layer;
			}
		}
		layer++;
	}
	return layer;
    }
};