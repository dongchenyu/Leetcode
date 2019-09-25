class Solution {
public:
    bool inq[1000][1000]={false};
struct node{
	int x;
	int y;
};
int X[4]={1,-1,0,0};
int Y[4]={0,0,1,-1};
bool help(vector<vector<char>>& board,string word,int start,int x,int y,int row,int column){
	inq[x][y]=true;
	if(start==word.size()){
		return true;
	}
	else{
		for(int i=0;i<4;i++){
			int newx=x+X[i];
			int newy=y+Y[i];
			if(!(newx<0||newy<0||newx>=row||newy>=column)&&inq[newx][newy]==false){
                if(board[newx][newy]==word[start]){
                    if(help(board,word,start+1,newx,newy,row,column)) return true;  
                    
                }
				
			}
		}
        inq[x][y]=false;
		return false;
	}
}
bool exist(vector<vector<char>>& board, string word) {
	int row=board.size();
	if(row==0){
		return false;
	}        
   
	int column=board[0].size();
    if(word.size()==0){
        return true;
    }
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			if(word[0]==board[i][j]){
				if(help(board,word,1,i,j,row,column)){
					return true;
				}
                for(int i=0;i<row;i++){
		            for(int j=0;j<column;j++){
                        inq[i][j]=false;
                    }
                }
			}
		}
	}
	return false;
}
};