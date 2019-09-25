class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len=digits.size();
	int nums=0;
	for(int i=len-1;i>=0;i--){
		if(digits[i]==9){
			nums++;
		}
		else{
			break;
		}
	} 
	vector<int>v;
	int first=len-nums-1;
	for(int i=0;i<first;i++){
		v.push_back(digits[i]);
	}       
	v.push_back(digits[first]+1);
	for(int i=first+1;i<len;i++){
		v.push_back(0);
	}
	return v;
    }
};