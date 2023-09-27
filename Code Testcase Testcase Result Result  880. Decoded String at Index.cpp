class Solution {
public:
    string decodeAtIndex(string s, int k) 
    {
        long long dl = 0;
        int n = s.length();
        int digit;

        for (int i = 0; i < n; i++) 
        {
            if (isdigit(s[i])) 
            {
                digit = s[i] - '0';
                dl *= digit;
            } 
            else 
            {
                dl++;
            }
        }

        for (int i = n - 1; i >= 0; i--) 
        {
            if (isdigit(s[i])) 
            {
                digit = s[i] - '0';
                dl /= digit;
                k %= dl;
            } 
            else 
            {
                if (k == 0 || k == dl) 
                {
                    string res;
                    res+=s[i];
                    return res;
                }
                dl--;
            }
        }

        return "";
    }
};
