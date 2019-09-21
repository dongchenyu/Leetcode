bool checkRecord(string s) {
    int len=s.size();
    int numA=0;
    int conL=0;
    for(int i=0;i<len;i++){
        if(s[i]=='A'){
            numA++;
            conL=0;
        }
        if(s[i]=='L'){
            conL++;
        }
        if(s[i]=='P'){
            conL=0;
        }
        if(conL>2||numA>1){
            return false;
        }
    }     
    return true;
}