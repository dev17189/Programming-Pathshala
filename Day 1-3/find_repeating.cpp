#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={1,2,3,4,4,5};
    int n=arr.size();
    int l=0,h=n-1;
    while(l<=h)
    {
        int m=(l+h)/2;
        if(arr[m]==m) 
        {
            if(arr[m-1]==m-1)
            { 
                h=m-1;
            }
            else 
            {
                cout<<m<<endl;
                return 0;
            }
        }
        else 
        {
            l=m+1;
        }
    }
    return 0;
}