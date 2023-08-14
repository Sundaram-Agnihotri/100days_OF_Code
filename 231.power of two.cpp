class Solution {
public:
    bool isPowerOfTwo(int n) {
       
     
        
        long pow=1;
        if(n==1)
        {
            return true;
        }
        while(n>pow)
        {
            pow=2*pow;
            if(pow==n)
            {
                return true;
            }
        }
        return false;
    }
};
