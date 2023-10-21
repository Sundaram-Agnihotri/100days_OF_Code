 long long sumOfDivisors(int N)
    {
        // Write Your Code here
         long ans = 0;
        
        for(int i=1;i<=N;i++){
            ans = ans + i*(N/i);
        }
        
        return ans;
    }
