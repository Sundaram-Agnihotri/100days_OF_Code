class Solution {
public:
    double myPow(double x, int n) {
        
     
       
       long long p = abs(n);
        double ans = pow(x, p);
        if(n < 0) ans = 1 / ans;
        return ans;
    }
};
