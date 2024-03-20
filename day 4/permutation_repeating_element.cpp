#include<bits/stdc++.h>
using namespace std;
void solve(string &str,int j){
    if(j==str.size()-1) {
        cout<<str<<endl;
        return;
    }
    vector<bool> flag(256,false);
    for(int i=j;i<str.size();i++){
        if(flag[str[i]]) continue;
        else{
            flag[str[i]]=true;
            swap(str[i],str[j]);
            solve(str,j+1);
            swap(str[i],str[j]);
        }
    }
}
int main(){
    string str="aab";
    solve(str,0);
    return 0;
}