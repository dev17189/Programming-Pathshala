class Solution {
public:
int c=0;
void solve(string &str,int j){
    c++;
    // if(j==str.size()-1) {
    //     cout<<str<<endl;
    //     return;
    // }
    vector<bool> flag(256,false);
    for(int i=j;i<str.size();i++){
        if(flag[str[i]]) continue;
        else{
            flag[str[i]]=true;
            swap(str[i],str[j]);
            solve(str,j+1);
            swap(str[i],str[j]);
        }
    }
}
    int numTilePossibilities(string tiles) {
        solve(tiles,0);
        return c-1;
    }
};