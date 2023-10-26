    int minOperation(int n)
    {
        //code here.
        int ans = 0;
        
        while(n>0){
            if(n%2 == 0 && n>2){
                n = n/2;   // when n is even then double the values
            }
            else
            n--;  //when n i odd and less than 3 then simpley add 1 to it
            
              ans++;
        }
        
      return ans;
    }
