#include<bits/stdc++.h>
using namespace std;

void troublesort(vector<int> &arr){
    vector<int> odd;
    vector<int> even;
    for(int i=0;i<arr.size();){
        even.push_back(arr[i]);
        i++;
        odd.push_back(arr[i]);
        i++;
    }
    sort(odd.begin(),odd.end());
    sort(even.begin(),even.end());
    int k=0;
    for(int i=0;i<even.size();i++){
        arr[k]=even[i];
        k++;
        arr[k]=odd[i];
        k++;
    }
}

int main(){
    vector<int> arr={4,2,3,5,2};
    troublesort(arr);
    for(auto i:arr) cout<<i<<" ";
    return 0;
}