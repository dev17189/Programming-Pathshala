#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=17;
    int l=0,h=n;
    while(l<=h){
        int m=(l+h)/2;
        if(m*m>n){
            h=m-1;
        } 
        else if(m*m<=n){
            if((m+1)*(m+1)>=n) {
                cout<<m<<endl;
                return 0;
            }
            else l=m+1;
        }
    }
    return 0;
}