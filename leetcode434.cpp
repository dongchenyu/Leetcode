int countSegments(string s) {
        int len=s.size();
        int result=0;
        for(int i=0;i<len;i++){
            if(s[i]==' '){
                result++;
            }
        }
        return result+1;
    }