    int compress(vector<char>& chars) {
    int len=chars.size();
    vector<char>v;
    vector<int>t;
    char now=chars[0];
    int times=1;
    for(int i=1;i<len;i++){
        if(chars[i-1]==chars[i]){
            times++;
        }
        else{
            t.push_back(times);
            v.push_back(chars[i-1]);
            times=1;
        }
    }
        t.push_back(times);
        v.push_back(chars[len-1]);
    int size=v.size();
    int result=0;
    result+=size;
    chars.clear();
    for(int i=0;i<size;i++){
        chars.push_back(v[i]);
        if(t[i]==1){

        }
        else{
            string temp;
            while(t[i]>0){
                result++;
                char c=t[i]%10+'0';
                t[i]/=10;
                temp.push_back(c);
            }
            reverse(temp.begin(),temp.end());
            for(int j=0;j<temp.size();j++){
                chars.push_back(temp[j]);
            }
        }
    }
    return result;
}