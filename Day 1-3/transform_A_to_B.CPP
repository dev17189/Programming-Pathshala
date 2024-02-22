#include<bits/stdc++.h>
using namespace std;
 
bool solve(int a,int b,vector<int>&temp,vector<int> &ans){
    if(a==b){
        ans=temp;
        return true;
    }
    if(a>b) return false;
    temp.push_back(2*a);
    bool x=solve(2*a,b,temp,ans);
    if(x) return true;
    temp.pop_back();
    temp.push_back((10*a)+1);
    bool y=solve((10*a)+1,b,temp,ans);
    temp.pop_back();
    return x || y;
}
int main(){
    int a=100,b=40021;
    vector<int> ans;
    vector<int> temp;
    temp.push_back(a);
    bool z= solve(a,b,temp,ans);
    if(z){
        cout<<"Yes"<<endl<<ans.size()<<endl;
        for(auto i:ans) cout<<i<<" ";
        cout<<endl;
    }
    else cout<<"No"<<endl;
    return 0;
}