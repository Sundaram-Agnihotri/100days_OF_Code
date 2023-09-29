class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
       
//         int n=nums.size();
//         stack<int>s;
//         s.push(nums[0]);
// int c=1,k=1;
       
//         for(int i=1;i<n;i++)
//         {
//             if(s.top()<=nums[i] &&k==1 && s.top()<=nums[n-1])
//             {
//                 s.push(nums[i]);
//                 c++;
//             }
//             if(s.top()>=nums[i] && c==1 && s.top()>=nums[n-1])
//             {
//                 s.push(nums[i]);
//                 k++;
//             }
           
            
//         }

//         if(c==n||k==n)
//        { return true;
//        }

//         return false;

        int res = 0;
        int n = nums.size();
        for(int i =0;i<n-1; i++){
            if(nums[i] > nums[i+1]){
                if(res == 0) res = -1;
                else if(res == 1) return false;
            }
            else if(nums[i] < nums[i+1]){
                if(res == 0) res = 1;
                else if(res == -1) return false;
            }
        }
        return true;
 

        
        
    }
};
