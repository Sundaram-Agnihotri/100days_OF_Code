   void dfs(int i,int j,vector<vector<int>>&matrix,int n,int m){
        for(int k=0;k<n;k++){
            if(matrix[k][j]==0){
                matrix[k][j]=1;
            }
        }
        for(int k=0;k<m;k++){
            if(matrix[i][k]==0){
                matrix[i][k]=1;
            }
        }
    }
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
        int n=matrix.size();
        int m=matrix[0].size();
        bool visited[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==1){
                    visited[i][j]=1;
                }
                else{
                    visited[i][j]=0;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==1&&visited[i][j]==1){
                    dfs(i,j,matrix,n,m);
                }
            }
        }
    }
