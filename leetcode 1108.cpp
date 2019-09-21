string defangIPaddr(string address) {
    int len=address.size();
    string s;
    for(int i=0;i<len;i++){
        if(address[i]=='.'){
            s.push_back('[');
            s.push_back('.');
            s.push_back(']');
        }
        else{
            s.push_back(address[i]);
        }
    }
    return s;
}