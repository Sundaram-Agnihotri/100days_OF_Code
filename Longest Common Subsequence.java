class Solution
{
    //Function to find the length of longest common subsequence in two strings.
   static int solve(int x,int y,String s1,String s2,int dp[][]){
         
        if(x==0 || y==0 ){
            return 0;
        }
        if(dp[x][y]!=-1){
            return dp[x][y];
        }
        if(s1.charAt(x-1)==s2.charAt(y-1)){
            return dp[x][y]= solve(x-1,y-1,s1,s2,dp)+1;
        }
        else{
            // int ans1=solve(x-1,y,s1,s2,dp);
            // int ans2=solve(x,y-1,s1,s2,dp);
            return dp[x][y]= Math.max(solve(x-1,y,s1,s2,dp),solve(x,y-1,s1,s2,dp));
        }
        
    }
    static int lcs(int x, int y, String s1, String s2)
    {
        // your code here
        int dp[][] = new int[x+1][y+1];
        for(int i=0;i<x+1;i++){
            for(int j=0;j<y+1;j++){
                dp[i][j]=-1;
            }
        }
        return solve(x,y,s1,s2,dp);
    }
    
}
