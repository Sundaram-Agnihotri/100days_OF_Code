 vector<int> boundaryTraversal(vector<vector<int> > mat, int n, int m) 
    {
        // code here
         vector<int> traversal; 
        int top = 0, bottom = n-1; 
        int left = 0, right = m-1; 
    
        // left to right 
        for(int j = left; j <= right; j++) {
            traversal.push_back(mat[top][j]); 
        }
        top++; 
        // top to bottom 
        for(int i = top; i <= bottom; i++) {
            traversal.push_back(mat[i][right]); 
        }
        right--; 
        
        // right to left 
        if(top <= bottom) {
            for(int j = right; j >= left; j--) {
                traversal.push_back(mat[bottom][j]); 
            }
        }
        bottom--; 
        
        // bottom to up 
        if(left <= right) {
            for(int i = bottom; i >= top; i--) {
                traversal.push_back(mat[i][left]); 
            }
        }
        left++; 
    
        return traversal;    
    }
