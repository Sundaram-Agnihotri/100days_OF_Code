       vector <int> rotate (int n, int d)
        {
            //code here.
             vector<int>ans;
            d = d%16;
            int a = (n<<d | (n>>(16-d)))&0xFFFF;
            int b = (n>>d | (n<<(16-d)))&0xFFFF;
            
            ans.push_back(a);
            ans.push_back(b);
            
            return ans;
        }
