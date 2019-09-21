vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
    int row=nums.size();
    int column=nums[0].size();
    int sum=row*column;
    if(sum==r*c){
        int a[10005];
        vector<vector<int> >result;
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                a[i*column+j]=nums[i][j];
            }
        }
        for(int i=0;i<r;i++){
            vector<int>temp;
            for(int j=0;j<c;j++){
                temp.push_back(a[i*c+j]);
            }
            result.push_back(temp);
        }
        return result;
    }   
    else{
        return nums;
    }  
}