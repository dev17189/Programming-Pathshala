class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,int> mp;
        int n2=trust.size();
  
    
        for(int i=0;i<n2;i++){
            mp[trust[i][0]]-=1;
            mp[trust[i][1]]+=1;
        

        }

        for(int i=1;i<=n;i++)
        {
            if(mp[i]==n-1){
                return i;
            }
        }
        return -1;
    }
};