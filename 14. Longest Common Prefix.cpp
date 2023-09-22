class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i=0;
       
        string ans;

        while(true)
        {
             char ch_cur=0;
            for(auto str : strs)
            {
                if(i>=str.size())
                {
                    ch_cur=0;
                    break;

                }// starting 
                if(ch_cur==0)
                {
                    ch_cur=str[i];
                 
                }
                else if(str[i]!=ch_cur)
                {
                    ch_cur=0;
                    break;
                }
            }
            if(ch_cur==0)
            {
                break;
            }
            ans.push_back(ch_cur);
            i++;

        }
        return ans;
        
    }
};
