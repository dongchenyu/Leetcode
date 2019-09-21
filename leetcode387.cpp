int firstUniqChar(string s) {
    int times[26];
    int len=s.size();
    memset(times,0,sizeof(times));
    for(int i=0;i<len;i++){
        times[s[i]-'a']++;
    }    
    for(int i=0;i<len;i++){
        if(times[s[i]-'a']==1){
            return i;
        }
    }    
    return -1;
}