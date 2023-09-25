    vector<int> maxCombinations(int N, int K, vector<int> &A, vector<int> &B) {
        // code here
         priority_queue<int,vector<int>,greater<int>>q;
        vector<int>ans;
      
        
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        
        for(int i=N-1;i>=0;i--)
        {
            for(int j=N-1;j>=0;j--)
            {
                int sum = A[i] + B[j];
                
                 if(q.size()<K)
                 {
                      q.push(sum);
                    
                 }
                 else
                 {
                     if(sum>q.top())
                     {
                         q.pop();
                         q.push(sum);
                         
                     }
                     else{
                         break;
                     }
                     
                 }
                 
            }
        }
        
        while(!q.empty())
        {
            ans.push_back(q.top());
            q.pop();
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
