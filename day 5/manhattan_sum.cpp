#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> x={1,3,7,8};
    vector<int> y={2,3,4,5,6};
    int s=0;
    vector<int> distx(4);
    distx[0]=0;
    sort(x.begin(),x.end());
    for(int i=1;i<4;i++){
        distx[i]=distx[i-1]+(i)*(x[i]-x[i-1]);
    }
    for(auto i:distx) cout<<i<<" ";
    cout<<endl;
    vector<int> disty(5);
    distx[0]=0;
    sort(y.begin(),y.end());
    for(int i=1;i<5;i++){
        disty[i]=disty[i-1]+(i)*(y[i]-y[i-1]);
    }
    for(auto i:disty) cout<<i<<" ";
}