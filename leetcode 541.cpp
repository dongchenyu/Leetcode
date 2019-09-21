string reverseStr(string s, int k) {
    int len=s.size();
    int t=len/k;
    int start=0;
    int end=k;
    while(end<len){
        reverse(s.begin()+start,s.begin()+end);
        start+=2*k;
        end+=2*k;
    }
    return s;
}