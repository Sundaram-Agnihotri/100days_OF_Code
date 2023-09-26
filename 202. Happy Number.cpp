class Solution {
public:
     int getnext(int n)
     {
         int ans=0;
         while(n)
         {
             int r=n%10;
             ans+=(r*r);
             n/=10;
         }
         return ans;
     }
    bool isHappy(int n) {
        int slow=n;

        int fast=getnext(n);
        while(fast!=1 && slow!=fast)
        {
            slow=getnext(slow);
            fast=getnext(getnext(fast));
        }
        return fast==1;
        
    }

};
