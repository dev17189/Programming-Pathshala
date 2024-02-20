#include<bits/stdc++.h>
using namespace std;

void subset(int i,int n,vector<int> temp,vector<int> arr){
    if(i==n){
        for(int i=0;i<temp.size();i++)
        cout<<temp[i]<<" ";
        cout<<endl;
        return;
    }
    subset(i+1,n,temp,arr);
    temp.push_back(arr[i]);
    subset(i+1,n,temp,arr);
}

void subarr(int i,int n,int temp[],int arr[],int s){
    if(i==n){
        for(int j=0;j<s;j++)
        cout<<temp[j]<<" ";
        cout<<endl;
        return;
    }
    subarr(i+1,n,temp,arr,s);
    temp[s]=arr[i];
    subarr(i+1,n,temp,arr,s+1);
    // temp[s+1]=arr[i];
    // subarr(i+1,n,temp,arr,s+2);
}
int main(){
// vector<int> arr={1,2,3};
int ar[]={1,2,3};
int tem[6];
subarr(0,6,tem,ar,0);
// vector<int> temp;
// subset(0,arr.size(),temp,arr);
return 0;
}