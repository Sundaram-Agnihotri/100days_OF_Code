class Solution {
    
    public boolean find132pattern(int[] nums) {
        int n = nums.length;
        if(n < 3){
            return false;
        }
        int[] mins = new int[n];
        // make list of mins at num index
        mins[0]=nums[0];
        for(int i=1;i<n;i++){
            mins[i] = Math.min(mins[i-1],nums[i]);
        }
        Stack<Integer> stack = new Stack<>(); // keep track of potential k's in decreasing order
        for(int i=n-1;i>=0;i--){
            if(stack.isEmpty()){
                stack.push(nums[i]);
            };
            while(!stack.isEmpty() && stack.peek() <= mins[i]){ // while potential k is smaller than i
                stack.pop();
            }
            if(stack.isEmpty()){ // no more potential k's
                stack.push(nums[i]);
                continue;
            }
            if(stack.peek() >= nums[i]){ // bigger than j
                stack.push(nums[i]);
            }else if(stack.peek() > mins[i]){ // between i and j
                return true;
            }
        }
        return false;
    }
}
