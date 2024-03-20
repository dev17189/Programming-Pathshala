#include<bits/stdc++.h>
using namespace std;

bool solve(vector<int> &arr,int &t){
    unordered_map<int,int> mp;
    for(auto i:arr){
        if(mp[t-i]) return true;
        mp[i]++;
    }
    return false;
}

int main(){
    vector<int> arr={2,1,3};
    int t=2;
    cout<<solve(arr,t);
    return 0;
}