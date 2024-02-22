#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,4,4,4,9,9,10,10,10,10,11};
    int n=arr.size();
    int l=0,h=n-1,t=4;
    while(l<=h){
        int m=(l+h)/2;
        if(t==arr[m]){
            if(m==0 || arr[m-1]!=arr[m]) {
                cout<<m;
                return 0;
            }
            else{
                h=m-1;
            } 
        }
        else if(t>arr[m]){
            l=m+1;
        }
        else{
            h=m-1;
        }
    }
}