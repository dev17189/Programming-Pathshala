#include<bits/stdc++.h>
using namespace std;

    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size(), m=board[0].size(),l=word.size();
        bool ans=false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans=find(board,i,j,m,n,l,0,word);
                if(ans)
                return true;
            }
        }
        return false;
    }
    bool find(vector<vector<char>>& board,int i,int j, int m,int n,int l,int y,string word){
        if(y==l)
        return true;
        if(i<0 || j<0 || i>=n || j>=m || word[y]!=board[i][j])
        return false;
        char ch=board[i][j];
        board[i][j]='.';
        bool ans=find(board,i+1,j,m,n,l,y+1,word) || find(board,i-1,j,m,n,l,y+1,word) || find(board,i,j+1,m,n,l,y+1,word) || find(board,i,j-1,m,n,l,y+1,word);
        board[i][j]=ch;
        return ans;
    }
};