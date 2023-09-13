string findLargest(int N, int S){
        // code here
          string ans ="";
        
        if(S==0 && N>1){
            return "-1";
        }
        
        for(int i=0;i<N;i++){
            
            if(S>=9){
                ans += '9';
                S -= 9;
            }
            else{
                ans += to_string(S);
                S = 0;
            }
        }
        
        if(S > 0){
            return "-1";
        }
        
        else{
            return ans;
        }
