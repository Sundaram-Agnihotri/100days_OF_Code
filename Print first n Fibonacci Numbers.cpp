 vector<long long> printFibb(int n) 
    {
        //code here

            vector<long long> v;
        v.push_back(1);
        if (n == 0 || n == 1) return v;
        v.push_back(1);

        
        for(int i = 2; i < n; ++i){
            long long current = v[i-1] + v[i-2];
            v.push_back(current);
        }
        return v;
