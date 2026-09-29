class Solution {
public:
bool isValid(vector<string>&board,int row,int col,int n){
    int r=row-1,c=col-1;
    while(r>=0 && c>=0){
        if(board[r][c]=='Q') return 0;
        r--;
        c--;
    }
    r=row-1;
    while(r>=0){
        if(board[r][col]=='Q') return 0;
        r--;
    }
    r=row-1,c=col+1;
    while(r>=0 && c<n){
        if(board[r][c]=='Q') return 0;
        r--;
        c++;
    }
    return 1;
}
void solve(vector<vector<string>>&res,vector<string>&board,int row,int n){
    if(row==n){
        res.push_back(board);
        return;
    }
    for(int i=0;i<n;i++){
        if(isValid(board,row,i,n)){
            board[row][i]='Q';
            solve(res,board,row+1,n);
            board[row][i]='.';
        }
    }
}
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>res;
        string temp="";
        temp.append(n,'.');
        vector<string>board(n,temp);
        solve(res,board,0,n);
        return res;
    }
};