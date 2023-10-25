   static int knapSack(int N, int W, int val[], int wt[])
    {
        // Simple and optimised approach by striver
        
        int dp[] = new int[W+1];
        dp[0] = 0;
        int max = 0;
        int temp = 0;
        int tbag = 0;    //bag weight -> initially 0
        
        for(int bag=1;bag<=W;bag++){
            
            for(int j=0;j<N;j++){
                
                if(wt[j] <= bag){
                    int left = bag - wt[j];
                    tbag = val[j] + dp[left];
                }
                
                if(max < tbag)
                max = tbag;
            }
            
            dp[bag] = max;
        }
        
        return dp[W];
