class Solution{
    static long largestPrimeFactor(int N) {
        // code here
        
        for (int i =2; i*i<=N ; i++){
            if (N%i==0){
                N = N/i;
                i--;
            }
        }
       return  (long)N;
    }
}
