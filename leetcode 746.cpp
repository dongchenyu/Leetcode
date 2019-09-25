class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
          int len=cost.size();
     int c[1005];
     if(len==0){
         return 0;
     }
     if(len==1){
         return cost[0];
     }
     memset(c,0,sizeof(c));
     c[0]=cost[0];
     c[1]=cost[1];
     for(int i=2;i<len;i++){
         c[i]=min(c[i-1]+cost[i],c[i-2]+cost[i]);
     }   
       /*for(int i=0;i<len;i++){
           cout<<c[i]<<' ';
       }*/
     return min(c[len-1],c[len-2]);
    }
    
};