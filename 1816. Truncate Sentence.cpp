class Solution {
public:
    string truncateSentence(string s, int k) {
        int c=0;
        string s1="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
            {
                s1+=s[i];
            }
            else
            {
                c++;
                if(k==c)
                {
                    break;
                }
                s1+=' ';
            }
        }
        return s1;
        
    }
};
