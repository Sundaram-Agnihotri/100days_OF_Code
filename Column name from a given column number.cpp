    string colName (long long int n)
    {
        // your code here
                string ans;
        
        while(n){
            n--;
            
            int rem = n%26;
            
            ans += char('A' + rem);
            n = n/26;
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
