int findPairs(vector<int>& nums, int k) {
    int len=nums.size();
    sort(nums.begin(),nums.end());
    set<int>s(nums.begin(),nums.end());
    set<int>::iterator it=s.begin();
    vector<int>v;
    int result=0;
    for(;it!=s.end();it++){
        v.push_back(*it);
    }
    int len2=v.size();
    if(k==0){
        bool flag=false;
        for(int i=0;i<len-1;i++){
            if(nums[i]==nums[i+1]&&flag==false){
                result++;
                flag=true;
            }
            else{
                flag=false;
            }
        }
    }
    else{
        for(int i=0;i<len2;i++){
            for(int j=i+1;j<len2;j++){
                if(abs(v[i]-v[j])==k){
                    result++;
                    break;
                }
            }
        }
    }
    return result;      
}