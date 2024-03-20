#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &str,int j){
int c=0;
    if(j==str.size()) {
        return 1;
    }
    for(int i=j;i<str.size();i++){
        if((j+1)%str[i]==0 || str[i]%(j+1)==0){
            swap(str[i],str[j]);
            c+=solve(str,j+1);
            swap(str[i],str[j]);
        }
    }
    return c;
}
    int countArrangement(int n) {
        vector<int> arr;
        for(int i=1;i<=n;i++) arr.push_back(i);
        return solve(arr,0);
        // return c;
    }

    int main(){
        int n=12;
        cout<<countArrangement(n);
        return 0;
    }