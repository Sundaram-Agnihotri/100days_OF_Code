    vector<int> find(int arr[], int n , int x )
    {
        // code here
        int i = lower_bound(arr,arr+n,x) - arr;
        int j = upper_bound(arr,arr+n,x) - arr-1;
        
        if(arr[i]!=x)
        return {-1,-1};
        
        return {i,j};
    }
