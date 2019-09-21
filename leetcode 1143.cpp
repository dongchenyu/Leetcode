int longestCommonSubsequence(string text1, string text2) {
    int dp[1005][1005];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<1005;i++){
        dp[i][0]=0;
        dp[0][i]=0;
    }      
    int len1=text1.size();
    int len2=text2.size();
    for(int i=0;i<len1;i++){
        for(int j=0;j<len2;j++){
            if(text1[i]==text2[j]){
                dp[i+1][j+1]=dp[i][j]+1;
            }
            else{
                dp[i+1][j+1]=max(dp[i+1][j],dp[i][j+1]);
            }
        }
    }  
    return dp[len1][len2];
}