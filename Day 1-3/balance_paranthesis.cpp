#include<bits/stdc++.h>
using namespace std;

void create(vector<string> &ans,string temp,int n,int op,int cl){
    if(op+cl==2*n){
        ans.push_back(temp);
        return;
    }
    if(op==cl){
        create(ans,temp+'(',n,op+1,cl);
    }
    else if(op==n){
        create(ans,temp+')',n,op,cl+1);
    }
    else{
        create(ans,temp+'(',n,op+1,cl);
        create(ans,temp+')',n,op,cl+1);
    }
    
}

int main(){
    int n=7;
    vector<string> ans;
    string temp;
    create(ans,temp,n,0,0);
    for(auto i:ans){
        cout<<i<<endl;
    }
}