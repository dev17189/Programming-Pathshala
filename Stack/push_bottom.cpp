#include<bits/stdc++.h>
using namespace std;

void pushbottom(stack<int> &s,int val){
    if(s.empty()){
        s.push(val);
        return;
    }
    int t=s.top();
    s.pop();
    pushbottom(s,val);
    s.push(t);
}
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    pushbottom(s,10);
    while(!s.empty()){ cout<<s.top()<<endl;
        s.pop();
    }
        return 0;
}