#include<bits/stdc++.h>
using namespace std;

void create(vector<string> &ans,string temp,int n,int m,int op,int cl,int ob,int cb){
    if(op+cl==2*n){
        ans.push_back(temp);
        return;
    }
    if(op==cl){
        create(ans,temp+'(',n,m,op+1,cl,ob,cb);
    }
    if(ob==cb){
        create(ans,temp+'{',n,m,op,cl,ob+1,cb);
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
    int n=2,m=2;
    vector<string> ans;
    string temp;
    create(ans,temp,n,m,0,0,0,0);
    for(auto i:ans){
        cout<<i<<endl;
    }
}