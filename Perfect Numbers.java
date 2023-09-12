class Solution {
    static int isPerfectNumber(long N) {
        // code here
                long sum = 0;
        for(int i=2;i<Math.sqrt(N);i++){
            
            if(N%i == 0){
                
                sum += i + N/i;
            }
        }
        sum++;
        
        if(sum == N && N!=1) return 1;
        return 0;
    }
};
