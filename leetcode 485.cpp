int findMaxConsecutiveOnes(vector<int>& nums) {
    int result=0;
    int con=0;
    int len=nums.size();
    for(int i=0;i<len;i++){
        if(nums[i]==0){
            if(con>result){
                con=result;
            }
            con=0;
        }
        else{
            con++;
        }
    } 
    return result;       
}