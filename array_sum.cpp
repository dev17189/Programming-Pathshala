#include<bits/stdc++.h>
using namespace std;

int sum(int l,int h,vector<int> arr){
    if(l==h) return arr[l];
    if(l>h) return 0;
    int mid=(l+h)/2;
    return sum(l,mid,arr)+sum(mid+1,h,arr);
}
int main(){
    vector<int> arr={1,2,3,4,5,6,7,8,9};
    cout<<sum(0,arr.size()-1,arr);
    return 0;
}