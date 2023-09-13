int  integer[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};//uniqe values
string roman[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

class Solution {
public:
    string intToRoman(int num) {
        string ans="";
        for(int i=0;i<13;i++)
        {
            int val=integer[i];
            while(num>=val)
            {
                ans+=roman[i];
                num-=val;
            }
        }
         return ans;
        
    }
};
