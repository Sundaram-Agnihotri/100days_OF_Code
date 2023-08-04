    void Reverse(stack<int> &St){
        
        vector<int>ans;
        while(!St.empty()){
            int elem = St.top();
            ans.push_back(elem);
            St.pop();
        }
        
        for(auto it:ans){
            St.push(it);
        }
    }
