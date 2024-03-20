#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &temp,int l,int r,int &k){
    if(k==0) return;
    if(l>=r-1) return;
    int m=l+(r-l)/2;
    swap(temp[m-1],temp[m]);
    k-=2;
    merge(temp,l,m,k);
    merge(temp,m,r,k);
}

int main(){
    int n=10000,k=10001;
    if(k%2==0 || k>=(2*n)){
        cout<<-1<<endl;
        return 0;
    }
    vector<int> temp(n);
    for(int i=1;i<=n;i++) temp[i-1]=i;
    k-=1;
    merge(temp,0,n,k);
    for(auto i:temp) cout<<i<<" ";
    return 0;
}