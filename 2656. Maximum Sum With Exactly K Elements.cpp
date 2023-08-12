class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int s=nums.size()-1;
        sort(nums.begin(),nums.end());
        int sum=0;
        int n=nums[s];
        for(int i=0;i<k;i++)
        {
            sum=sum+n;
            n++;
            
    }
    return sum;
    }
};
