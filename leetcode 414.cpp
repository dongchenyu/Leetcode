int thirdMax(vector<int>& nums) {
    int len=nums.size();
    sort(nums.begin(),nums.end());
    int result;
    int times=1;
    for(int i=len-2;i>=0;i--){
        if(nums[i]!=nums[i+1]){
            times++;
        }
        if(times==3){
            result=nums[i];
            break;
        }
    }
    if(times!=3){
        result=nums[len-1];
    }
    return result;
}