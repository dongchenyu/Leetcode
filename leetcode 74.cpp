class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int row=matrix.size();
	if(row==0){
		return false;
	}
        int column=matrix[0].size();
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			if(matrix[i][j]==target){
				return true;
			}
			if(matrix[i][j]>target){
				return false;
			}
		}
	}
	return false;   
    }
};