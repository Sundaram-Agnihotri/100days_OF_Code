  const int M = 1e9+7;
    int nthFibonacci(int n){
        // code here
         long long n1 = 0;
      long long n2 = 1;
      
      for(int i=2;i<=n;i++){
          long long n3 = n2;
          n2 = (n1+n2)%M;
          n1 = n3;
      }
      return n2;
        
    }
