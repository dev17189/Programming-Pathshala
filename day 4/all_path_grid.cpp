#include<bits/stdc++.h>
using namespace std;

int solve(int i,int j,int &tarx,int &tary,int &n,int &m,vector<vector<bool>> &visited,int k,vector<vector<int>> path){
    if(i==tarx && j==tary){
        if(k==0){
            for(auto a:path){
                cout<<"( "<<a[0]<<","<<a[1]<<" )"<<" -> ";
            } 
            cout<<tarx<<","<<tary;
            cout<<endl;
            return 1;
        }

        return 0;
    }
    if(i>=n || j>=m || i<0 || j<0) return 0;
    if(visited[i][j]) return 0;
    visited[i][j]=true;
    path.push_back({i,j});
    int neeche = solve(i+1,j,tarx,tary,n,m,visited,k-1,path);
    int upr = solve(i-1,j,tarx,tary,n,m,visited,k-1,path);
    int left = solve(i,j-1,tarx,tary,n,m,visited,k-1,path);
    int right = solve(i,j+1,tarx,tary,n,m,visited,k-1,path);
    visited[i][j]=false;
    path.pop_back();
    return upr+neeche+left+right;
}

int main(){
    int n=4,m=4;
    int currx=2,curry=2;
    int tarx=0,tary=1,k=3;
    vector<vector<bool>> visited(n,vector<bool> (m));
    vector<vector<int>> path;
    cout<<solve(currx,curry,tarx,tary,n,m,visited,k,path);
    return 0;
}