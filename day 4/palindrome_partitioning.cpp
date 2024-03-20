class Solution {
public:
bool pali(string &s,int index,int i){
    while(index<=i){
        if(s[index]!=s[i]) return false;
        index++;
        i--;
    }
    return true;
}
    void solve(string &s,int index,int &n,vector<vector<string>> &ans,vector<string> &op){
        if(index==n){
            ans.push_back(op);
            return;
        }
        for(int i=index;i<s.size();i++){
            if(pali(s,index,i)){
                op.push_back(s.substr(index,i-index+1));
                solve(s,i+1,n,ans,op);
                op.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        int n=s.size();
        vector<vector<string>> ans;
        vector<string> op;
        solve(s,0,n,ans,op);
        return ans;
    }
};