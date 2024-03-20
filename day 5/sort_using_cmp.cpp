#include<bits/stdc++.h>
using namespace std;

bool cmp(int &a,int &b){
    if(a<=b) return false;
    return true;
}

int main(){
    vector<int> arr={1,4,22,5,3,6,3};
    sort(arr.begin(),arr.end(),cmp);
    for(auto i:arr) cout<<i<<" ";
    cout<<endl;
    return 0;
}