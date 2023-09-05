class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == 0) {
            return 0;
        }
        if(dividend == pow(-2,31) && divisor == -1) {
            return 2147483647;
        }
        
       
        return dividend/divisor;
       
    }
};
