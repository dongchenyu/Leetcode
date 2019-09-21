string reverseWords(string s) {
    int len=s.size();
    int start,end;
    for(int i=0;i<len;i++){
        if(s[i]!=' '){
            start=i;
            break;
        }
    }        
    for(int i=len-1;i>=0;i--){
        if(s[i]!=' '){
            end=i;
            break;
        }
        
    }
    int pos1=start,pos2=end;
    vector<string>v;
    string result;
    for(int i=start;i<=end;i++){
        if(s[i]==' '){
            string temp;
            for(int j=pos1;j<i;j++){
                temp.push_back(s[j]);
            }
            v.push_back(temp);
            pos1=i+1;
        }
    }
    string temp;
    for(int i=pos1;i<=end;i++){
        temp.push_back(s[i]);
    }
    v.push_back(temp);
    len=v.size();
    for(int i=0;i<len;i++){
        for(int j=0;j<v[i].size();i++){
            result.push_back(v[i][j]);
        }
        if(i!=len-1){
            result.push_back(' ');
        }
    }
    return result;
}