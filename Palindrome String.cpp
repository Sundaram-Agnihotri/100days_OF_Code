int isPalindrome(string S)
	{

	    int s = 0;
	    int end =   S.length()-1;
	    
	    while(s < end){
	        if(S[s] != S[end]){
	            return 0;
	        }
	       s++;
	       end--;
	    }
	    return 1;
	}
