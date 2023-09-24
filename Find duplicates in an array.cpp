    vector<int> duplicates(int arr[], int n) {
        // code here
  map<int,int> m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        vector<int> v;
        for(auto it:m){
            if(it.second>1)v.push_back(it.first);
        }
        if(v.size()==0) v.push_back(-1);
        else{
            
        sort(v.begin(),v.end());
        
        }
        return v;
    }
