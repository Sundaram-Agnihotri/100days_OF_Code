        void convertToWave(int n, vector<int>& arr){
        
        // Your code here
        if(n<=0)
        return;
        int i=0;
        int j = i+1;
        
        while(j<n){
            swap(arr[i],arr[j]);
            
            i+=2;
            j+=2;
        }
        
    }
