class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()<=1) return s;
    bool dp[1005][1005]={false};
    int max=0;
    int start;
    int end;
    int len=s.size();
    for(int i=0;i<len;i++){
        dp[i][i]=true;
        max=1;
    }
    for(int i=0;i<len-1;i++){
        if(s[i]==s[i+1]){
            dp[i][i+1]=true;
            max=2;
            start=i;
        }
    }
    for(int l=3;l<=len;l++){
        for(int i=0;i+l-1<len;i++){
            int j=l+i-1;
            if(dp[i+1][j-1]==true&&s[i]==s[j]){
                dp[i][j]=true;
                
                    max=l;
                    start=i;
                    end=j;
                
            }
        }
    }
    return s.substr(start,max);
}
};