class Solution {
    public static int findCatalan(int n) {
        // code 
        int mod = 1000000007;
        if (n==1 || n==0)
        return 1;
        int [] arr = new int [n+1];
        arr [0] = arr[1] = 1;
        
        for (int i=2; i<=n; i++){
            for (int j =0; j<i; j++){
                arr[i] =(int)((arr[i]+ (long)arr[j] * arr[i-j-1])%mod);
            }
        }
        return arr[n];
    }
}
