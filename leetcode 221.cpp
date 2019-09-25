class Solution {
public:
int findmin(int a,int b,int c){
    if(a<=b&&a<=c){
        return a;
    }
    else if(b<=a&&b<=c){
        return b;
    }
    else{
        return c;
    }
}
int maximalSquare(vector<vector<char>>& matrix) {
    int len1=matrix.size();
    if(len1==0){
        return 0;
    }
    int len2=matrix[0].size();
    int res[1005][1005];
    memset(res,0,sizeof(res));
    int result=0;
    for(int i=0;i<len1;i++){
        res[i][0]=matrix[i][0]-'0';
        if(res[i][0]==1){
            result=1;
        }
    }
    for(int i=0;i<len2;i++){
        res[0][i]=matrix[0][i]-'0';
        if(res[0][i]==1){
            result=1;
        }
    }
    for(int i=1;i<len1;i++){
        for(int j=1;j<len2;j++){
            if(matrix[i][j]=='0'){
                res[i][j]=0;
            }
            else{
                res[i][j]=findmin(res[i-1][j],res[i-1][j-1],res[i][j-1])+1;
            }
            if(res[i][j]>result){
                result=res[i][j];
            }
           // cout<<res[i][j];
        }
    }
    return result*result;
}
};