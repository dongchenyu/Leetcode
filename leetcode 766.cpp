bool isToeplitzMatrix(vector<vector<int>>& matrix) {
    int row=matrix.size();
    int column=matrix[0].size();
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(i>=1&&j>=1){
                if(matrix[i][j]!=matrix[i-1][j-1]){
                    return false;
                }
            }
        }
    }       
    return true;
}