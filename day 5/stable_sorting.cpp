#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> &a,pair<int,int> &b){
    if(a.first!=b.first) return a.first<b.first;
    return a.second<b.second;
}

int main(){
    vector<int> arr={2,1,2,2,3,1,2};
    vector<pair<int,int>> temp;
    for(int i=0;i<arr.size();i++){
        temp.push_back({arr[i],i});
    }
    sort(temp.begin(),temp.end());
    for(auto i:temp){
        cout<<i.first<<" ";
    }
    return 0;
}