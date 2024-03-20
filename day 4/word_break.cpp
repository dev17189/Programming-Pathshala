class Solution {
public:
bool solve(string &s,vector<string> &wordDict,int idx,vector<int> &dp){
    if(idx==s.size()) return true;
    bool flag=false;
    string temp;
    if(dp[idx]!=-1) return dp[idx];
    for(int i=idx;i<s.size();i++){
        temp+=s[i];
        if(find(wordDict.begin(),wordDict.end(),temp)!=wordDict.end()){
            if(solve(s,wordDict,i+1,dp)) return dp[idx]=true;
        }
    }
    return dp[idx]=false;
}
    bool wordBreak(string s, vector<string>& wordDict) {
        string temp;
        int n=s.size();
        vector<int> dp(n,-1);

        return solve(s,wordDict,0,dp);
    }
};