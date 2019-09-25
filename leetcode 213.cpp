class Solution {
public:
    int rob_(vector<int>& nums){
    int a[1000];
    memset(a,0,sizeof(a));
    int len=nums.size();
    a[0]=nums[0];
    a[1]=max(nums[0],nums[1]);
    for(int i=2;i<len;i++){
        a[i]=max(a[i-1],a[i-2]+nums[i]);
    }
    return a[len-1];
}
int rob(vector<int>& nums) {
    int len=nums.size();
    if(len==0) return 0;
    if(len==1) return nums[0];
    if(len==2) return max(nums[0],nums[1]);
    vector<int>nums1;
    vector<int>nums2;
    for(int i=0;i<len-1;i++){
        nums1.push_back(nums[i]);
        nums2.push_back(nums[i+1]);
    }
    return max(rob_(nums1),rob_(nums2));
}
};