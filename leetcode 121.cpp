class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int len=prices.size();
        if(len==0){
            return 0;
        }
    int max=prices[len-1];
        int result=0;
    int p[100000];
    p[len-1]=0;
    memset(p,0,sizeof(p));
    for(int i=len-1;i>=0;i--){
        if(prices[i]>=max){
            p[i]=0;
            max=prices[i];
        }
        else{
            p[i]=max-prices[i];
            if(p[i]>result){
                result=p[i];
            }
        }

    }
        return result;
    }
};