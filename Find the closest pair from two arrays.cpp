vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        //code here
        int i =0;
        int j = m-1;
        
        int mini = INT_MAX;
        vector<int>ans(2);
        
        while(i < n && j>=0){
            int sum = arr[i] + brr[j];
            
            if(mini > abs(sum-x)){
                mini = abs(sum-x);
                ans[0] = arr[i];
                ans[1] = brr[j];
            }
            
            if(sum <= x)
            i++;
            
            else
            j--;
        }
        
        return ans;
        
