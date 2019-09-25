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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
          vector<vector<int> >vi;
        if (root==NULL) {
            return vi;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
        	int len=q.size();
        	vector<int>v;
        	for(int i=0;i<len;i++){
        		TreeNode*top=q.front();
        		q.pop();
        		v.push_back(top->val);
        		if(top->left){
        			q.push(top->left);
				}
				if(top->right){
					q.push(top->right);
				}
			}
			vi.push_back(v);
			v.clear();
		}
		reverse(vi.begin(),vi.end());
        return vi;
    }
};