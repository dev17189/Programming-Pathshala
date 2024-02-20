#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={1,2,1,3,2,1,1};
    int n=arr.size();
    int l=0,h=n-1;
    while(l<h){
        int m=(h+l)/2;
        if(arr[m]<arr[m+1]) l=m+1;
        else{
            h=m;
        }
    }
    cout<<l<<endl;
    return 0;
}