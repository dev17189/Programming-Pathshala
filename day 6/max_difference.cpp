#include<bits/stdc++.h>
using namespace std;

int maxDiff(vector<pair<int,int>> p,vector<int> arr){
    sort(arr.begin(),arr.end());
    for(int i=arr.size()-1;i>=0;i--){
        if()
    }
}

int main(){
    vector<int> arr={3,2,4,6,5,8,9};
    int n=arr.size();
    vector<pair<int,int>> p;
    for(int i=0;i<n;i++){
        p.push_back({arr[i],i});
    }
    cout<<maxDiff(p,arr);
}