#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={2,2,1,2,1,3,5};
    unordered_map<int,int> freq;
    for(auto i:arr){
        freq[i]++;
    }
    for(auto i:freq){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}