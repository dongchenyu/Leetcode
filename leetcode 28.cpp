int strStr(string haystack, string needle) {
    int len1=haystack.size();
    int len2=needle.size();
    int len=len1-len2+1;
    int temp;
    for(int i=0;i<len;i++){
        if(haystack[i]==needle[0]){
            for(int j=0;j<len2;j++){
                temp=j;
                if(haystack[i+j]!=needle[j]){
                    break;
                }
            }
            if(temp==len2-1){
                return i;
            }
        }
    }    
    return -1;    
}