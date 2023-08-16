 public static int findCatalan(int n) {
        // code here
        //dp by tabulation
        int mod = (int)(1e9+7);
        
        long arr[] = new long[n+1];
        arr[0] = 1;    //base case
        arr[1] = 1;    //base case
        
        for(int i=2;i<=n;i++){
            for(int j=0;j<i;j++){
                arr[i] = (arr[i] + arr[j]*arr[i-j-1])%mod;
            }
        }
        
        return (int)arr[n];
    }
