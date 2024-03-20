#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr,int &target,int i){
    int c=0;
    int j=arr.size()-1;
    while(i<j){
        int p=arr[i]*arr[j];
        if(p<=target){
            c+=j-i+1;
            i++;
        }
        else{
            j--;
        }
    }
    return c;
}

int main(){
    vector<int> arr={1,3,2,4,5,7,9};
    int target=30;
    cout<<solve(arr,target,0);
    return 0;
}