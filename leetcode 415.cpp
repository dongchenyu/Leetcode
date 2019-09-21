string addStrings(string num1, string num2) {
    int len1=num1.size();
    int len2=num2.size();
    int len=max(len1,len2);
    string s1;
    string s2;
    for(int i=0;i<len1;i++){
        s1.push_back(num1[len1-1-i]);
    }        
    for(int i=0;i<len2;i++){
        s2.push_back(num2[len2-1-i]);
    }  
    if(len1>len2){
        int t=len1-len2;
        for(int i=0;i<t;i++){
            s2.push_back('0');
        }
    }
    else{
        int t=len2-len1;
        for(int i=0;i<t;i++){
            s1.push_back('0');
        }
    }
    int add=0;
    int now;
    string temp;
    for(int i=0;i<len;i++){
        int n1=s1[i]-'0';
        int n2=s2[i]-'0';
        now=(n1+n2+add)%10;
        add=(m1+n2+add)/10;
        char c=now+'0';
        temp.push_back(c);
    }
    if(add==1){
        temp.push_back('1');
    }
    reverse(temp.begin(),temp.end());
    return temp;
}