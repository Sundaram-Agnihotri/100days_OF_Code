class Solution {
    public static int findMinOperation(int N, int[][] matrix) {
    // code here
      int max =0;
      int [] row = new int [N];
      int [] col = new int [N];
      
      for (int i =0; i< N; i++){
          for (int j =0; j<N; j++){
              row[i]+=matrix[i][j];
              col[i]+=matrix[j][i];
          }
          max = Math.max(Math.max(row[i], col[i]), max);
      }
      int ans =0;
      for (int i =0; i< N ;i++){
          ans+=max-row[i];
      }
      return ans;
      
    }
}
        
