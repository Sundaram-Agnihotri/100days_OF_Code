class Solution {
public:
    int bitwiseComplement(int n) {
        int m=n;
        int maskable=0;
        if(n==0)
        return 1;
        // if(n==1)
        // {
        //     return 0;
        // }
        while(m!=0)
        {
            maskable=(maskable << 1) | 1;
           m= m >> 1;
        }

        int ans= (~n) & maskable;
        return ans;
  
        
    }
};
