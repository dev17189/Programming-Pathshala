#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={3,5,1,7,9,2,6,4};
    int n=arr.size();
    int l=0,h=n-1;
    while(l<=h){
        int m=(l+h)/2;
        if(arr[m]%2==0){
            if(m==0 || arr[m-1]%2) {
                cout<<m;
                return 0;
            }
            else{
                h=m-1;
            } 
        }
        else if(arr[m]%2){
            l=m+1;
        }
    }
}