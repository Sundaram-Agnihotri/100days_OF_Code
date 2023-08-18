 static ArrayList<Integer> leaders(int arr[], int n){
        // Your code here
        ArrayList<Integer>ans = new ArrayList<>();
        int max = arr[n-1];
        
        for(int i=n-1;i>=0;i--){
            
            if(i==n-1){
                ans.add(arr[i]);
            }
            else if(arr[i] >= max){
                ans.add(arr[i]);
                max = arr[i];
            }
        }
        
        Collections.reverse(ans);
        return ans;
    }
