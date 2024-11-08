class Solution {
    public int[] getMaximumXor(int[] nums, int maximumBit) {
        
        int xor  = 0;
        for(int i : nums){
            xor ^= i;
        }
        int maxXor = (1<<maximumBit)-1;
        int[] ans = new int[nums.length];
        for(int i=0;i<nums.length;i++){
            ans[i]  = maxXor^xor;
            xor ^= nums[nums.length-1-i];
        }
        return ans;
    }
}
