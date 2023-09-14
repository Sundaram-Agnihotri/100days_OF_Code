class Solution {
public:
    string toLowerCase(string s) {
        int n=s.size();
       
        for(int i=0;i<n;i++)
        {
           int ascci=s[i];
           if(ascci>=65 && ascci<=90)
           {
               ascci=ascci+32;
               s[i]=ascci;
           }

        }

            
           
        return s;
    }
};
