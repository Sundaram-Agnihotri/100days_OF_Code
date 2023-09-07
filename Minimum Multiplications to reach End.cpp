int minimumMultiplications(vector<int>& arr, int start, int end) {
        // code here
         int mod=1e5;
        queue<int>q;
        int level=0;
        q.push(start%mod);
        int mp[100001]={0};
        
        while(!q.empty()){
            
            int size=q.size();
            
            for(int i=0;i<size;i++){
                int x=q.front();
                q.pop();
                if(x==end)return level;
                
                for(auto &it:arr){
                   int y=(x*it)%mod;
                   if(mp[y]==0){
                       q.push((x*it)%mod);
                       mp[y]=1;
                   }
                }
                
                
            }
            level++;
            
        }
        return -1;
    }
