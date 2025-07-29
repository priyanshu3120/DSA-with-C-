class Solution {
public:
    bool isSafeQueen(vector<string>&board,int row,int col,int n)
    {   
        //checking horizental 
        for(int j=0; j<n; j++)
        {
           if(board[row][j]=='Q')
           return false;
        }
        //checking vertically
        for(int i=0; i<n; i++)
        {
            if(board[i][col]=='Q')
            return false;
        }
        //for left diagonal
        for(int i=row,j=col; i>=0 && j>=0; i--,j--)
        {
            if(board[i][j]=='Q')
            return false;
        }
        //for right diagonal
        for(int i=row,j=col; i>=0 && j<n; i--,j++)
        {
            if(board[i][j]=='Q')
            return false;
        }
        return true;
    }
    void nQueen(vector<string> &board,int row,int n,vector<vector<string>>&ans)
    {
        if(row == n)
        {
            ans.push_back(board);
            return;
        }
        for(int j=0; j<n; j++)
        {
            if(isSafeQueen(board,row,j,n))
            {
                board[row][j] = 'Q';
                nQueen(board,row+1,n,ans);
                board[row][j] = '.';
            }
        }

    }
    vector<vector<string>> solveNQueens(int n) {
       vector<vector<string>>ans;
       vector<string>board(n,string(n,'.'));

       nQueen(board,0,n,ans);
       return ans;   
    }
};