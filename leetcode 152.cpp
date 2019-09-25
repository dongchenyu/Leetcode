class Solution {
public:
    int maxProduct(vector<int>& nums) {
     int max_=nums[0];
    int min_=nums[0];
        int res=nums[0];
    for(int i=1;i<nums.size();i++){
        int t1=max_*nums[i];
        int t2=min_*nums[i];
        max_=max(max(t1,t2),nums[i]);
        min_=min(min(t1,t2),nums[i]);
        res=max(max_,res);
    }
    return res;
    }
};