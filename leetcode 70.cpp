class Solution {
public:
    int climbStairs(int n) {
       int a[100];
        memset(a,0,sizeof(a));
        a[1]=1;
        a[2]=2;
        for(int i=3;i<=n;i++){
            a[i]=a[i-1]+a[i-2];
        }
        return a[n];
    }
};