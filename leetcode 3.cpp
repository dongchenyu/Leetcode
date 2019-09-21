int lengthOfLongestSubstring(string s) {
    int len=s.size();
    if(len<=1){
        return len;
    }
    unordered_set<char>set;
    int result=0;
    int l=0;
    int r=0;
    while(r<len){
        while(set.count(s[r])){
            set.erase(s[l]);
            l++;
        }
        set.insert(s[r]);
        result=max(result,int(set.size()));
                   r++;
    }

    return result;   
}