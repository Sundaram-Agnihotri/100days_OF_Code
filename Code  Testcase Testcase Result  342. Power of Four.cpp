class Solution {
public:
    bool isPowerOfFour(int n) {
        // Iterate through powers of 4 from 4^0 to 4^15
        for (int i = 0; i <= 15; i++) {
            int powerOfFour = pow(4, i);
        
            if (powerOfFour == n)
                return true;
   
            if (powerOfFour > n)
                return false;
        }

        return false;
    }
};
