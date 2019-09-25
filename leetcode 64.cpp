class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int a[1000][1000];
	int row=grid.size();
	int column=grid[0].size();
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			a[i][j]=grid[i][j];
		}
	}
	int nums[1000][1000];
	int sum1=0;
	for(int i=row-1;i>=0;i--){
		sum1+=a[i][column-1];
		nums[i][column-1]=sum1;
	}  
	int sum2=0;
	for(int i=column-1;i>=0;i--){
		sum2+=a[row-1][i];
		nums[row-1][i]=sum2;
	}   
	for(int i=row-2;i>=0;i--){
		for(int j=column-2;j>=0;j--){
			nums[i][j]=a[i][j]+min(nums[i+1][j],nums[i][j+1]);
		}
	}
	return nums[0][0];
    }
};