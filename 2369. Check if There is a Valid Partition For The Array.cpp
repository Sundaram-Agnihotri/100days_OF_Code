class Solution {
public:
    bool validPartition(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+1,0);dp[0]=1;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1])dp[i+1]=(dp[i+1] || dp[i-1]);//Case 1: For two equal element 
            if(i>=2 && (nums[i]==nums[i-1]&&nums[i-2]==nums[i-1]))dp[i+1]=(dp[i+1] || dp[i-2]);//Case 2: For three equal element 
            if(i>=2 && (nums[i]==nums[i-1]+1&&nums[i-2]+1==nums[i-1]))dp[i+1]=(dp[i+1] || dp[i-2]);//Case 3: For three element with diffrerence of one.
        }
        return dp[n]==1;
    }
};
