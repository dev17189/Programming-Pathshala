#include<bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> arr1,vector<int> arr2){
    int i=0,j=0,k=0;
    int n=arr1.size(),m=arr2.size();
    vector<int> ans(n+m);
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            ans[k]=arr1[i++];
            // i++;
        }
        else{
            ans[k]=arr2[j++];
        }
        k++;
    }
    while(i<n){
        ans[k++]=arr1[i++];
    }
    while(j<m){
        ans[k++]=arr2[j++];
    }
    return ans;
}

int main(){
    vector<int> arr1={1,2,3,7,8,9};
    vector<int> arr2={4,5,10};
    vector<int> merged=merge(arr1,arr2);
    for(auto i:merged) cout<<i<<" ";
    return 0;
}