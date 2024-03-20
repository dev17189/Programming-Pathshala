#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> &a,pair<int,int> &b){
    if(a.second!=b.second) return a.second<b.second;
    cout<<a.first<<" "<<b.first<<endl;
    return a.first>b.first;
}

int main(){
    vector<int> arr={8,-8,2,-8,-5,-3};
    unordered_map<int,int> mp;
    for(int i=0;i<arr.size();i++) mp[arr[i]]++;
    vector<pair<int,int>> temp;
    for(int i=0;i<arr.size();i++){
        temp.push_back({arr[i],mp[arr[i]]});
    }
    sort(temp.begin(),temp.end(),cmp);
    for(auto i:temp){
        cout<<i.first<<" ";
    }
    return 0;
}