bool Pal(string s){
    int len=s.size();
    for(int i=0;i<=len/2;i++){
        if(s[i]!=s[len-i-1]){
            return false;
        }
    }        
    return true;
}
bool validPalindrome(string s) {
    if(s.size()==0){
        return true;
    }
    if(Pal(s)){
        return true;
    }
    else{
        int len=s.size();
        int pos1,pos2;
        for(int i=0;i<=len/2;i++){
            if(s[i]!=s[len-i-1]){
                pos1=i;
                pos2=len-i-1;
                break;
            }
        }   
        string t1,t2;
        for(int i=0;i<len;i++){
            if(i!=pos1){
                t1.push_back(s[i]);
            }
        }     
        for(int i=0;i<len;i++){
            if(i!=pos2){
                t2.push_back(s[i]);
            }
        }
        return Pal(t1)||Pal(t2);
    }
}