class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>>ans = new ArrayList<>();

        if(numRows == 0)
        return ans;

        List<Integer>first = new ArrayList<>();
        first.add(1);
        ans.add(first);

        if(numRows == 1)
        return ans;

        for(int i=1;i<numRows;i++){
            List<Integer>prev = ans.get(i-1);
            List<Integer>row = new ArrayList<>();
            row.add(1);

            for(int j=0;j<i-1;j++){
                row.add(prev.get(j)+ prev.get(j+1));
            }

            row.add(1);
                ans.add(row);
        }
          return ans;
    }
  
}
