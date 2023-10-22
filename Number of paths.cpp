long long  numberOfPaths(int m, int n)
{
    int mod=1000000007;
    vector<vector<long long>>dp(m+1,vector<long long>(n+1,0));
    dp[m-1][n-1]=1;
    for(int i=m-1;i>=0;i--)
    {
        for(int j=n-1;j>=0;j--)
        {
            dp[i][j]+=((dp[i+1][j]%mod+dp[i][j+1]%mod))%mod;
        }
    }
    return dp[0][0];
        
