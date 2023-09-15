class Solution {
public:
    string convert(string s, int numRows){
        if(numRows==1)
        return s;
        int n=s.size();
        vector<string>zigzag(numRows);
        int i=0;
        int row=0;
        bool direction=1;
        // top to bottum
        while(true)
        {
            if(direction)
            {
                while(row< numRows && i<n)
                {
                     zigzag[row++].push_back(s[i++]);

                }
                row=numRows-2;
            }
            else
            {
                 while(row>=0 && i<n)
                {
                     zigzag[row--].push_back(s[i++]);

                }
                row=1;

            }
            if(i>=n)
            break;
            direction=!direction;
        }
        string ans="";
        for(int i=0;i<zigzag.size();i++)
        {
        ans+=zigzag[i];
        }
        return ans;
    
        
    }
};
