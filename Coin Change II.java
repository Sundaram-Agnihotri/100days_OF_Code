class Solution {
        long dp [][] = new long [1001][10001]; 
    public int change(int amount, int[] coins) {
       
        
       for (long [] i : dp)
       Arrays.fill(i , -1);
        return (int) count(coins, coins.length, amount);
        
    }
 public long count(int coins[], int N, int sum) {
        // code here.
        if(sum ==0)return 1;
        if (sum <0 || N<=0)return 0;
        if (dp[N][sum]!=-1) return dp[N][sum];
         return dp[N][sum] =count(coins, N - 1, sum)
            + count(coins, N, sum - coins[N - 1]);
    }
}
