#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr,int k,int n,int i){
    if(i==n){
        if(k==0) return 1;
    return 0;
    }
    int c=0;
    for(int j=0;j<=(k/arr[i]);j++)
        c+=solve(arr,k-(j*arr[i]),n,i+1);
    return c;
}
int main(){
    vector<int> arr={5,7,9};
    int n=3,k=14;
    int ans=solve(arr,k,n,0);
    cout<<ans<<endl;
    return 0;
}