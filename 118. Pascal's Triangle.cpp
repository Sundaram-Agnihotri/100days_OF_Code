class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        ans.push_back({1});
        if (numRows == 1) 
        return ans;

        for (int i = 2; i <= numRows; i++) {
           vector<int> new_row(i);
           new_row[0]=1;
           new_row[i-1]=1;
           for (int j = 1; j<ans.back().size(); j++)
           {
               new_row[j]=ans.back()[j-1]+ans.back()[j];
           }
           ans.push_back(new_row);

        }   
        return ans;
    }
};
