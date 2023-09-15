  int solver(int ind,int sum,int n,int arr[],vector<vector<int>>&dp){
        if(sum<0)return 0;
        if(ind==n)return sum==0;
        if(dp[ind][sum]!=-1)return dp[ind][sum];
        return dp[ind][sum]=solver(ind+1,sum,n,arr,dp)||solver(ind+1,sum-arr[ind],n,arr,dp);
    }

    int equalPartition(int N, int arr[])
    {
        int sum = 0;
        for(int i=0;i<N;i++)sum+=arr[i];
        vector<vector<int>> dp(N+1,vector<int>((sum/2)+1,-1));
        if(sum%2)return 0;
        return solver(0,sum/2,N,arr,dp);
    }
