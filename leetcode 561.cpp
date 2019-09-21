int arrayPairSum(vector<int>& nums) {
    int len=nums.size();
    sort(nums.begin(),nums.end());
    int result=0;
    for(int i=0;i<len;i+=2){
        result+=nums[i];
    }        
    return result;
}