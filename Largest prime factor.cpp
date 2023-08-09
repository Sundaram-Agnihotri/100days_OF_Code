 long long int largestPrimeFactor(int N){
        // code here
       // by factorial approach
       
       long long fact =2;  //minimum prime is 2
       
       while(N){
           
           if(N%fact == 0)  //hence N is not prime number
          { 
           N = N/fact;
           
           if(N==1) break;
          }
          else {
              fact++;
          }
       }
       return fact;
    }
