bool palid(string s,int start,int end){
    while(start<=end){
        if(s[start]!=s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int countSubstrings(string s) {
    int len=s.size();
    int dp[1005];
    memset(dp,0,sizeof(1005));
    dp[0]=1;
    for(int i=1;i<len;i++){
        dp[i]=dp[i-1];
        for(int j=i;j>=0;i++){
            if(palid(s,i,j)){
                dp[i]++;
            }
        }
    }  
    return dp[len-1];      
}