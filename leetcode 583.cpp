int minDistance(string word1, string word2) {
    int len1=word1.size();
    int len2=word2.size();
    if(len1==0){
        return len2;
    }
    if(len2==0){
        return len1;
    }
    int dp[505][505];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<505;i++){
        dp[i][0]=0;
        dp[0][i]=0;
    }
    for(int i=1;i<=len1;i++){
        for(int j=1;j<=len2;j++){
            if(word1[i]==word2[j]){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return len1+len2-2*dp[len1][len2];
}