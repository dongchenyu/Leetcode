int strtoint(string s){
    int hour;
    int min;
    hour=(s[0]-'0')*10+s[1]-'0';
    min=(s[3]-'0')*10+s[4]-'0';
    int res=hour*60+min;
    return res;
}
int findMinDifference(vector<string>& timePoints) {
    vector<int>v;
    int len=timePoints.size();
    for(int i=0;i<len;i++){
        v.push_back(strtoint(timePoints[i]));
    }
    sort(v.begin(),v.end());
    int temp=v[0]+1440;
    v.push_abck(temp);
    int result=9999;
    for(int i=0;i<len;i++){
        result=min(result,v[i+1]-v[0]);
    }
    return result;
}