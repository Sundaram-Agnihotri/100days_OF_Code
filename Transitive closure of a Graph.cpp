    vector<vector<int>> transitiveClosure(int N, vector<vector<int>> graph)
    {
        // code here
        vector<vector<int>>t(N,vector<int>(N,0));
        
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                
                if(graph[i][j] == 1 || i==j)    //means that i reaches to j
                t[i][j] = 1;
            }
        }
        
        for(int k=0;k<N;k++){
            for(int i=0;i<N;i++){      //this loop is used for checking A->b->c->d->E
                for(int j=0;j<N;j++){
                    
                    t[i][j] = t[i][j] || (t[i][k] && t[k][j]);
                    
                }
            }
        }
        
        return t;
    }
