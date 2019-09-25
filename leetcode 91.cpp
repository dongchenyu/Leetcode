class Solution {
public:
    int numDecodings(string s) {
        if(s[0]=='0'){
            return 0;
        }
    int len=s.size();
        for(int i=1;i<len;i++){
            if(s[i-1]=='0'&&s[i]=='0'){
                return 0;
            }
        }
    int a[10005];
    memset(a,0,sizeof(a));
        if(len==0){
            return 0;
        }
    a[0]=1;
    a[1]=1;
    for(int i=2;i<=len;i++){
        if(s[i-1]=='0'){
            if(s[i-2]<'3'){
                a[i]=a[i-2];
            }
            else{
                a[i]=0;
            }
        }
        else{
            int temp=(s[i-1]-'0')+(s[i-2]-'0')*10;
            if(temp<=26&&temp>=10){
                a[i]=a[i-1]+a[i-2];
            }
            else {
                a[i]=a[i-1];
            }
        }
    }
    return a[len]; 
}
};