#include<iostream>
#include<cstring>
using namespace std;
class Solution {
public:
  bool isPalindrome(string s) {
	int len=s.length();
	cout<<len;
	if(s.length()==0){
		return true;
	}
	string str;
	for(int i=0;i<len;i++){
		if(s[i]>='a'&&s[i]<='z'){
			str.push_back(s[i]);
			//str+=s[i];
		}
		else if(s[i]>='A'&&s[i]<='Z'){
			char c=s[i]-'A'+'a';
			str.push_back(c);
			//str+=c;
		}
		else if(s[i]>='0'&&s[i]<='9'){
			str.push_back(s[i]);
			//str+=s[i];
		}
		else{
			
		}
	}
	int len1=str.size();
    for(int i=0;i<len1/2;i++){
    	if(str[i]!=str[len1-i-1]){
    		return false;
		}
	}
	return true;
}
};