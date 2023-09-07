class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int k=n-2;
        if(n==0 || nums.empty())
        return;

        for(int i=n-1;i>0;i--)
        {
           if(nums[i]<=nums[i-1])
             k--;
            else
             break;

        }

        if(k==-1)    // when last permutation input 3 2 1 in which kth position is  k=-1 then //                       we will reverse  
        {
            reverse(nums.begin(),nums.end());
            return;
        }
         
          for(int i=n-1;i>0;i--)
        {
           if(nums[i]>nums[k])
           {
                 swap(nums[i],nums[k]);
               break;
           }
        }

        reverse(nums.begin()+k+1,nums.end()); // after kth position reverse the item
        
    }
   
};
