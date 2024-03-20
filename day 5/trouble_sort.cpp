#include<bits/stdc++.h>
using namespace std;

void troublesort(vector<int> &a){
    bool done=false;
    while(!done){
        done=true;
        int i=0;
        while(i<a.size()-2){
            if(a[i]>a[i+2]){
                swap(a[i],a[i+2]);
                done=false;
            }
            i++;
        }
    }
}

int main(){
    vector<int> arr={4,2,3,5,2};
    troublesort(arr);
    for(auto i:arr) cout<<i<<" ";
    return 0;
}