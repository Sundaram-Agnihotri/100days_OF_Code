 int longestSubsequence(int n, int arr[])
    {
        vector<int>dp(n,1);
          int maxi=1;
          for(int i=1;i<n;i++)
          {
              for(int j=0;j<i;j++)
              {
                  if(arr[i]>arr[j] and dp[i]<dp[j]+1)
                    dp[i]=1+dp[j];
              }
              maxi=max(maxi,dp[i]);
          }
          return maxi;
    }
