   int mod=1000000007;
long long solve(int n,vector<long long>&dp)
    {
        if(n<0)
        {
            return 0LL;
        }
        if(n==0 || n==1)
        {
            return 1;
        }
        
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        
        long long a=solve(n-1,dp);
        long long b=solve(n-2,dp);
        long long c=solve(n-3,dp);
        
        return dp[n]=(a+b+c)%mod;
        
    }
    long long countWays(int n)
    {
        
        // your code here
    vector<long long>dp(n+1,-1);
    
    return solve(n,dp);
        
    }
