	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    int i,j,max = 0;
	    int sum[n];
	    
	    for(i=0;i<n;i++){
	        sum[i] = arr[i];
	    }
	    
	     for (i = 1; i < n; i++) {
            for (j = 0; j < i; j++) {
                if (arr[i] > arr[j] && sum[i] < sum[j] + arr[i]) 
                    sum[i] = sum[j] + arr[i]; 
            }
	     }
  
        
        for (i = 0; i < n; i++) {
            if (max < sum[i]) 
                max = sum[i]; 
        }
  
        return max;
	}  
