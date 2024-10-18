class Solution {
    public int countMaxOrSubsets(int[] nums) {
        int target = 0;
        for(int num :nums){
            target |= num;
        }
        return helper(0,nums,0,target);
    }
    public int helper(int ind,int nums[],int cur,int target){
        if(ind == nums.length){
            return (cur==target)?1:0;
        }
        int pick = helper(ind+1,nums,cur | nums[ind],target);
        int nonpick = helper(ind+1,nums,cur,target);
        return pick + nonpick;
    }
}
