//find the pivot which is the greatest element which has been rotated and brought somewhere in array.
//the pivot divides the region in 2 sorted arrays
//pivot is the only element which is greater than the element after it.
#include<bits/stdc++.h>
using namespace std;
int sqrt(int m){
    for(int i=0;i<m;i++){
        if(i*i>m) return i;
    }
}
int main(){
    vector<int> a={7,8,9,1,2,3,4,5,6};
    int n=a.size();
    int l=0,h=n-1,t=5;
    while(l<h){
        int m=(l+h)/2;
        if(a[m]<=a[m-1]) h=m-1;
        else{
            if(a[m]>a[m+1]){
                cout<<m;
                return 0;
            }
            else l=m+1;
        }
    }
}