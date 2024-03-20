#include<bits/stdc++.h>
using namespace std;

bool cmp(int &a,int &b){
    if(a%2 != b%2){
        if(a%2==0) return true;
        return false;
    }
    if(a%2) return a>b;
    return a<b;
}

int main(){
    vector<int> arr={6,1,3,4,2,9,11};
    sort(arr.begin(),arr.end(),cmp);
    for(auto i:arr) cout<<i<<" ";
}