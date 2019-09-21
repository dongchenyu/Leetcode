bool up(char c){
    if(c>='A'&&c<='Z'){
        return true;
    }
}
bool low(char c){
    if(c>='a'&&c<='z'){
        return true;
    }
}
bool detectCapitalUse(string word) {
    int len=word.size();    
    if(low(word[0])){
        for(int i=1;i<len;i++){
            if(up(word[i])){
                return false;
            }
        }
        return true;
    }    
    else{
        if(low(word[1])){
            for(int i=1;i<len;i++){
                if(up(word[i])){
                    return false;
                }
            }
            return true;
        }
        else{
            for(int i=1;i<len;i++){
                if(low(word[i])){
                    return false;
                }
            }
            return true;
        }
    }
}