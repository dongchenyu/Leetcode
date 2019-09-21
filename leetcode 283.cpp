void moveZeroes(vector<int>& nums) {
    int len=nums.size();
    int times=0;
    for(vector<int>::iterator it=nums.begin();it!=nums.end();it++){
        if((*it==0)){
            nums.erase(it);
            times++;
        }
    }
    while(times--){
        nums.push_back(0);
    }
}