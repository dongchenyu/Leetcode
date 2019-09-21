string toLowerCase(string str) {
    int len=str.size();
    string s;
    for(int i=0;i<len;i++){
        if(str[i]>='A'&&str[i]<='Z'){
            char c=str[i]-'A'+'a';
            s.push_back(c);
        }
        else{
            s.push_back(str[i]);
        }
    }        
    return s;
}