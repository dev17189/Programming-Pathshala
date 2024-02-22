#include<bits/stdc++.h>
using namespace std;

void evaluate(vector<int>&arr,char i){
    int n=arr.size();
    if(n==1) return;
    if(i=='+'){
        sort(arr.begin(),arr.end());
        int a=arr[n-1]+arr[n-2];
        arr.pop_back();
        arr.pop_back();
        arr.push_back(a);
    }
    else{
        sort(arr.begin(),arr.end(),greater<int>());
        swap(arr[0],arr[n-2]);
        int a=arr[n-1]*arr[n-2];
        arr.pop_back();
        arr.pop_back();
        arr.push_back(a);
    }
}

int main(){
    vector<int> arr={2,2,2,2};
    string s="**+";
    for(int i=0;i<3;i++)
    evaluate(arr,s[i]);
    cout<<arr[0];
}