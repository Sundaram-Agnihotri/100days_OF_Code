public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int cnt = 0;
	    for(int i=0;i<n;i++){
	        if(arr[i]==0){
	            cnt++;
	        }
	        
	        else
	        {
	            swap(arr[i],arr[i-cnt]);
	        }
	    }
	}
