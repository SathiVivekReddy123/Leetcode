class Solution {
public:
bool isValid(vector<vector<char>>&board,int row,int col,char val){
    for(int i=0;i<9;i++){
        if(board[row][i]==val) return 0;
    }
    for(int i=0;i<9;i++){
        if(board[i][col]==val) return 0;
    }
    row-=(row%3);
    col-=(col%3);
    for(int i=row;i<row+3;i++){
        for(int j=col;j<col+3;j++){
            if(board[i][j]==val) return 0;
        }
    }
    return 1;
}
bool solve(vector<vector<char>>&board,int cnt,int t){
    if(cnt==t) return 1;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j]=='.'){
                for(int k=1;k<=9;k++){
                    char temp=(k+'0');
                    if(isValid(board,i,j,temp)){
                        board[i][j]=temp;
                        if(solve(board,cnt+1,t)) return 1;
                        board[i][j]='.';
                    }
                }
                return false;
            }
        }
    }
    return 0;
}
    void solveSudoku(vector<vector<char>>& board) {
        int t=0;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') t++;
            }
        }
        if(t==0) return;
        if(solve(board,0,t)) return;
        return;
    }
};