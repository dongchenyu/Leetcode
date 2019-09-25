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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        	vector<int>v1;
	vector<int>v2;
	vector<vector<int> >vi;
	if(root==NULL){
		return  vi;
	}
	queue<TreeNode*>q;
	int layer=1;
	q.push(root);
	while(!q.empty()){
		int len=q.size();
		for(int i=0;i<len;i++){
			TreeNode*top=q.front();
			q.pop();
			v1.push_back(top->val);
			if(top->left!=NULL){
				q.push(top->left);
			}
			if(top->right!=NULL){
				q.push(top->right);
			}
		}
		if(layer%2==1){
			vi.push_back(v1);
		}
		else{
			int lenv=v1.size();
			for(int i=lenv-1;i>=0;i--){
				v2.push_back(v1[i]);
			}
			vi.push_back(v2);
		}
        layer++;
		v1.clear();
		v2.clear();
	} 
	return vi;
    }
};