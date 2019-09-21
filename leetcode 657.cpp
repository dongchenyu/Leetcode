bool judgeCircle(string moves) {
    int len=moves.size();
    int numU=0;
    int numD=0;
    int numL=0;
    int numR=0;
    for(int i-0;i<len;i++){
        if(moves[i]=='U'){
            numU++;
        }
        if(moves[i]=='D'){
            numD++;
        }
        if(moves[i]=='L'){
            numL++;
        }
        if(moves[i]=='R'){
            numR++;
        }
    }        
    return (numU==numD)&&(numL==numR);
}