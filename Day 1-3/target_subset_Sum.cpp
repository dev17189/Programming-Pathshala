#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr,int k,int i,int n){
    if(i==n){
        if(k==0) return 1;
        return 0;
    }
    int np=solve(arr,k,i+1,n);
    int p=solve(arr,k-arr[i],i+1,n);
    return np+p;
}
int main(){
    vector<int> arr={1,3,2,4};
    int k=5;
    int ans=solve(arr,k,0,4);
    cout<<ans<<endl;
    return 0;
}