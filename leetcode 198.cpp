class Solution {
public:
    int rob(vector<int>& nums) {
        int len=nums.size();
        if(len==0){
            return 0;
        }
        if(len==1){
            return nums[0];
        }
    int result[100000];
    memset(result,0,sizeof(result));
    result[0]=nums[0];
    result[1]=max(nums[0],nums[1]);
    for(int i=2;i<len;i++){
        result[i]=max(result[i-2]+nums[i],result[i-1]);
    }   
    return result[len-1];
    }
};