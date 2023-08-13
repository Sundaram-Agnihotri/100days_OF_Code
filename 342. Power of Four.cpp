class Solution {
public:
    bool isPowerOfFour(int n) {
        long pow=1;
        if(n==1)
        {
            return true;
        }
        while(n>pow)
        {
            pow=4*pow;
            if(pow==n)
            {
                return true;
            }
        }
        return false;
        
    }
};
