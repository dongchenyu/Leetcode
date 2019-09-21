bool match(string str,string pattern){
    int len1=str.size();
    int len2=pattern.size();
    if(len1!=len2){
        return false;
    }
    bool inq[50]={false};
    bool inq2[50]={false};
    vector<vector<int> >v;
    vector<vector<int> >p;
    for(int i=0;i<len1;i++){
        if(inq[i]==true){

        }
        else{
            vector<int>temp;
            vector<int>temp2;
            for(int j=i;j<len1;j++){
                if(inq[j]==false&&str[j]==str[i]){
                    temp.push_back(j);
                    inq[j]=true;
                }
                if(inq2[j]==false&&pattern[j]==pattern[i]){
                    temp2.push_back(j);
                    inq2[j]=true;
                }
            }
            v.push_back(temp);
            p.push_back(temp2);
        }
    }
    if(v.size()!=p.size()){
        return false;
    }
    else{
        for(int i=0;i<v.size();i++){
            if(v[i].size()!=p[i].size()){
                return false;
            }
            else{
                for(int j=0;j<v[i].size();j++){
                    if(v[i][j]!=p[i][j]){
                        return false;
                    }
                }
            }
        }
    }
    return true;
}
vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>v;
        int len=words.size();
        for(int i=0;i<len;i++){
            if(match(words[i],pattern)){
                v.push_back(words[i]);
            }
        }
        return v;
}