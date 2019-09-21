int findUnsortedSubarray(vector<int>& nums) {
    int len=nums.size();
    int a[10005];
    for(int i=0;i<len;i++){
        a[i]=nums[i];
    }       
    sort(nums.begin(),nums.end());
    int start,end;
    for(int i=0;i<len;i++){
        if(a[i]!=nums[i]){
            start=i;
            break;
        }
    }
    for(int i=len-1;i>=0;i--){
        if(a[i]!=nums[i]){
            end=i;
            break;
        }
    }
    return end-start+1;
}