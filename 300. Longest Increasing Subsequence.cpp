class Solution {
public:
int solve(vector<int>& nums,int n,int i,int j,vector<vector<int>>&dp){
    if(i>=n ||j>=n)return 0;
    if(dp[i][j+1]!=-1)return dp[i][j+1];
    int include=0;

        if(j==-1 || nums[i]>nums[j]){
//j=i kar rhe bcz j ko paas nhi kar skta because isi scope me mai j change kar de rha
            include=1+solve(nums,n,i+1,i,dp);//yha fasunga
        }

   int exclude=0+solve(nums,n,i+1,j,dp);
   dp[i][j+1]=max(include,exclude);
    return  dp[i][j+1];//because i have taken j =-1 (initially)
}
int solveUsingTab(vector<int>&nums){
    int n=nums.size();
     vector<vector<int>>dp(n+2,vector<int>(n+2,0));
     //no need of base case
     //val of i and j changing from 0 to n therefore
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=-1;j--){
            int include=0;
            if(j==-1 || nums[i]>nums[j]){
                include=1+dp[i+1][i+1];
            }
            int exclude=0+dp[i+1][j+1];
            dp[i][j+1]=max(include,exclude);
                
            }
    }
   return  dp[0][0];
}
    int lengthOfLIS(vector<int>& nums) {
        // int i=0;
        // int n=nums.size();
        // int j=-1;
        // vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        // int ans=solve(nums,n,i,j,dp);
        
        return solveUsingTab(nums);
    }
};
