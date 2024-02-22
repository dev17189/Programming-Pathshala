#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr,int k,int n,int i){
    if(i==n){
        if(k==0) return 1;
    return 0;
    }
    int c=0;
    if(k>=arr[i]){
        c=solve(arr,k-arr[i],n,i);
    }
    c+=solve(arr,k,n,i+1);
    return c;
}
int main(){
    vector<int> arr={1,2};
    int n=2,k=4;
    int ans=solve(arr,k,n,0);
    cout<<ans<<endl;
    return 0;
}