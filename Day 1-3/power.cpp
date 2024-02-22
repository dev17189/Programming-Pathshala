#include<bits/stdc++.h>
using namespace std;

int p(int a,int b){
    if(b==1) return a;
    if(b%2){
        return p(a,b/2)*p(a,b/2)*a;
    }
    return p(a,b/2)*p(a,b/2);
}

int main(){
    int a=5,b=3;
    cout<<p(a,b);
    return 0;
}