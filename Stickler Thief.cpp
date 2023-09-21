   int FindMaxSum(int arr[], int n)
    {
        // Your code here
        int f = 0;
        int s = 0;
        
        for(int i=0;i<n;i++){
            int temp = f;
            f = max(s + arr[i],f);
            s = temp;
        }
        
        return f;
    }
