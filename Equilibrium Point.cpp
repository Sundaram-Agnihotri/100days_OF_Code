int equilibriumPoint(long long arr[], int n) {
    
        // Your code here
         int lsum = 0;
        int rsum = 0;
        
        for(int i=0;i<n;i++){
            lsum += arr[i];
        }
        
        for(int i=n-1;i>=0;i--){
            rsum += arr[i];
            
            if(lsum == rsum){
                return i+1;
            }
            
            lsum -= arr[i];
        }
        
        return -1;
    }
