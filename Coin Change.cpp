 long long int count(int coins[], int N, int sum) {

       long long int dp[sum+1][N+1];
       for(int i=0;i<sum+1;i++)
       {
           dp[i][0]=0;
       }
       for(int i=0;i<N+1;i++)
       {
           dp[0][i]=1;
       }
       for(int i=1;i<=sum;i++)
       {
           for(int j=1;j<=N;j++)
           {
               dp[i][j]=dp[i][j-1];
               if(i-coins[j-1]>=0)
               {
                   dp[i][j]+=dp[i-coins[j-1]][j];
               }
           }
       }
       return dp[sum][N];
    }
