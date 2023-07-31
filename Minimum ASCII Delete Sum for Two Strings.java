lass Solution {
    static int[][] dp;

    public int help(String s1, String s2, int i, int j) {

        int cost =0;
      if (dp[i][j]!=-1)
      return dp[i][j];
     
        if (i == s1.length() && j == s2.length())
         cost =0;
         else if (i==s1.length())
         cost += help(s1, s2, i,j+1) +s2.charAt(j);
         else if (j ==s2.length())
         cost += help(s1, s2, i+1, j) +s1.charAt(i);
         else if (s1.charAt(i)==s2.charAt(j))
         cost += help(s1, s2, i+1, j+1);
         else {
     cost+= Math.min(help(s1, s2, i+1 ,j)+s1.charAt(i),                    help(s1, s2, i ,j+1)+s2.charAt(j));
         }
        dp[i][j] = cost;
        return dp[i][j];

    }
    public int minimumDeleteSum(String s1, String s2) {
        dp = new int[s1.length() + 1][s2.length() + 1];
        for (int[] k : dp) {
            Arrays.fill(k, -1);
        }

        int ans = help(s1, s2, 0, 0);
        return ans;
    }
}
