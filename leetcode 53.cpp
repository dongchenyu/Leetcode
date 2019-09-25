class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int len=nums.size();
    bool flag=false;
    for(int i=0;i<len;i++){
        if(nums[i]>=0){
            flag=true;
            break;
        }
    }
   if(flag==false){
        int r=-2147483647;
        for(int i=0;i<len;i++){
            if(nums[i]>r){
                r=nums[i];
            }
        }
        return r;
    }
    int m[100000];
    memset(m,0,sizeof(m));
    int sum=0;
    int max=0;
    for(int i=0;i<len;i++){
        sum+=nums[i];
        if(sum<0){
            sum=0;
        }
        m[i]=sum;
        if(sum>max){
            max=sum;
        }
    }
    return max;  
}
};