vector<int> pathInZigZagTree(int label) {
    vector<int>sum;
    sum.push_back(1);
    sum.push_back(5);
    for(int i=2;i<20;i++){
        int len=sum.size();
        sum.push_back(2*sum[len-1]+1);
    }
    int level;
    for(int i=0;i<25;i++){
        if(pow(2,i+1)>label){
            level=i;
            break;
        }
    }
    vector<int>temp;
    temp.push_back(label);
    if(level%2==1){
        label=sum[level]-label;
    }
    int now=label;
    level--;
    while(label>0){
        label/=2;
        if(level%2==1){
            int t=sum[level]-label;
            temp.push_back(t);
        }
        else{
            temp.push_back(label);
        }
        level--;
    }
    int len=temp.size();
    vector<int>result;
    for(int i=len-2;i>=0;i--){
        result.push_back(temp[i]);
    }
    return result;
    
}