class Solution {
public:
    bool isPowerOfThree(int n) {
       
     
       long pow=1;
        if(n==1)
        {
            return true;
        }
        while(n>pow)
        {
            pow=3*pow;
            if(pow==n)
            {
                return true;
            }
        }
        return false;
        
    }
};
