class Solution {
public:
bool isValid(int row,int col,int m,int n){
    if(row<0 || row>=m || col<0 || col>=n) return 0;
    return 1;
}
bool solve(vector<vector<char>>&board,string& word,int row,int col,int m,int n,int idx,vector<vector<int>>&visited){
    if(idx==word.size()) return 1;
    if(isValid(row-1,col,m,n) &&!visited[row-1][col] && board[row-1][col]==word[idx]){
        visited[row-1][col]=1;
        if(solve(board,word,row-1,col,m,n,idx+1,visited)) return 1;
        visited[row-1][col]=0;
    }
    if(isValid(row+1,col,m,n) &&!visited[row+1][col] && board[row+1][col]==word[idx]){
        visited[row+1][col]=1;
        if(solve(board,word,row+1,col,m,n,idx+1,visited)) return 1;
        visited[row+1][col]=0;
    }
    if(isValid(row,col-1,m,n) &&!visited[row][col-1] && board[row][col-1]==word[idx]){
        visited[row][col-1]=1;
        if(solve(board,word,row,col-1,m,n,idx+1,visited)) return 1;
        visited[row][col-1]=0;
    }
    if(isValid(row,col+1,m,n) &&!visited[row][col+1] && board[row][col+1]==word[idx]){
        visited[row][col+1]=1;
        if(solve(board,word,row,col+1,m,n,idx+1,visited)) return 1;
        visited[row][col+1]=0;
    }
    return 0;
}
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size(),n=board[0].size();
        vector<vector<int>>visited(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0]){
                    visited[i][j]=1;
                    if(solve(board,word,i,j,m,n,1,visited)) return 1;
                    visited[i][j]=0;
                }
            }
        }
        return 0;
    }
};