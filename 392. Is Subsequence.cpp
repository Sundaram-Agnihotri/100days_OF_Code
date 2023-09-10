class Solution {
public:
    bool isSubsequence(string s, string t) {
        int c=0;
        for(char ch:t)
        {
                if(s[c]==ch)
                {
                c++;
                }  
        }
        return c==s.size();
        
    }
};
