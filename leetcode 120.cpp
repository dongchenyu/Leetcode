class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
         int n=triangle.size();
    int num[1005][1005];
    memset(num,0,sizeof(num));
    for(int i=0;i<triangle.size();i++){
        for(int j=0;j<triangle[i].size();j++){
            num[i][j]=triangle[i][j];
        }
    }
    int a[1005][1005];
    memset(a,0,sizeof(a));
    for(int i=0;i<n;i++){
        a[n-1][i]=num[n-1][i];
    }
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<triangle[i].size();j++){
            a[i][j]=min(triangle[i][j]+a[i+1][j],triangle[i][j]+a[i+1][j+1]);
        }
    }
    return a[0][0];
    }
};