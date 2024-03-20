#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr,int i,int j,int &target){
    int n=arr.size();
    int c=0;
    while(i<j){
        int s=arr[i]+arr[j];
        if(s==target){
            c++;
            while(i<j && i<n-1 && arr[i]==arr[i+1]){
                i++;
                c++;
            }
            while(i<j && j>0 && arr[j]==arr[j-1]){
                j--;
                c++;
            }
            i++;
            j--;
        }
        else if(s>target) j--;
        else i++;
    }
    return c;
}

int main(){
    vector<int> arr={1,4,4,5,6,7,8};
    int target=12;
    int n=arr.size();
    cout<<solve(arr,0,n-1,target);
    return 0;
}