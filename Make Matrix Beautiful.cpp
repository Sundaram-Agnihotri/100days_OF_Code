 public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
        int total = 0;
        for(int i=0;i<n;i++){
            int sum1 = 0;
            int sum2 = 0;
            
            for(int j=0;j<n;j++){
                sum1 = sum1 + matrix[i][j];
                sum2 = sum2 + matrix[j][i];
            }
            total = max(total,max(sum1,sum2));
        }
        
        int cnt = 0;
        for(int i=0;i<n;i++){
            int sum = 0;
            
            for(int j=0;j<n;j++){
                sum = sum + matrix[i][j];
            }
            cnt += total -sum;
        }
        
        return cnt;
    } 
