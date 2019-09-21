vector<int> findDisappearedNumbers(vector<int>& nums) {
    vector<int>result;
    int len=nums.size();
    bool flag[100005]={false};
    for(int i=0;i<len;i++){
        flag[nums[i]]=true;
    }
    for(int i=1;i<=len;i++){
        if(flag[i]==false){
            result.push_back(i);
        }
    }
    return result;
}