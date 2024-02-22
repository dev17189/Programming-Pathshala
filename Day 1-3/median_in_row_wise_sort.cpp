int small(vector<vector<int>> &matrix, int R, int C,int d){
    int c=0;
    for(int i=0;i<R;i++){
        int l=0,h=C-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(matrix[i][mid]>d) l=m-1;
            else h=m+1;
        }
        c+=h;
    }
    return c;
}
    int median(vector<vector<int>> &matrix, int R, int C){
                 
    }