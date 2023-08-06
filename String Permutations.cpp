    
    void solve(string S,vector<string>&s,int index){
        if(index>=S.size()){
            s.push_back(S);
            return;
        }
        
        for(int i=index;i<S.size();i++){
            swap(S[index],S[i]);
            solve(S,s,index+1);
            swap(S[i],S[index]);
        }
    }
    
    vector<string> permutation(string S)
    {
        vector<string>s;
        int index = 0;
        
        solve(S,s,index);
        sort(s.begin(),s.end());
        
        return s;
    }
