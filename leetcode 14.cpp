string longestCommonPrefix(vector<string>& strs) {
    int minlen=999999;
    int len=strs.size();
    if(len==0){
        return "";
    }
    if(len==1){
        return strs[0];
    }
    for(int i=0;i<len;i++){
        if(strs[i].size()<minlen){
            minlen=strs[i].size();
        }
    }        
    bool flag=true;
    string res="";
    for(int i=0;i<minlen;i++){
        char c=strs[0][i];
        for(int j=0;j<len;j++){
            if(strs[j][i]!=c){
                flag=false;
                return res;
            }
        }
        res.push_back(c);
    }
    return res;
}