class Solution {
public:
    bool canJump(vector<int>& nums) {
    int n=nums.size();
    int pos;
    vector<int>v1,v2;
    if(nums[0]==0){
        if(n==1) return true;
        else return false;
    }
    if(nums[0]==0){
    	v1.push_back(0);
	}
    for(int i=1;i<n-1;i++){
		if(nums[i]==0&&nums[i-1]!=0){
			v1.push_back(i);
		}
		if(nums[i]==0&&nums[i+1]!=0){
			v2.push_back(i);
		}
	}
     if(nums[n-1]==0){
    	v2.push_back(n-1);
	}   
	int len=v1.size();
	int sign1=0;
	for(int i=0;i<len;i++){
       // cout<<v1[i]<<" "<<v2[i];
		for(int j=sign1;j<v1[i];j++){
            if(j+nums[j]>n){
                return true;
            }
			/*if(j+nums[j]>v2[i]){
				sign1=v2[i]+1;
				break;
			}*/
            while(j+nums[j]>v2[i]){
				sign1=v2[i]+1;
				if(i<v2.size()){
                    i++;
                }
                else{
                    break;
                }
			}
            if(j+nums[j]==v2[i]){
                if(v2[i]==n-1){
                    return true;
                }
            }
			if(j==v1[i]-1&&nums[j]<=v2[i]+1-v1[i]){
				return false;
			}
		}
	}
	return true;
    }
};