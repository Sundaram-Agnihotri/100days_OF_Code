	//Recursive Approach
	
// int solve(int arr[], int size, int target, int index){
	    
// 	    if(index == size){
// 	        if(target == 0) return 1;
// 	        else return 0;
// 	    }
	    
// 	    if(target == 0) return 1;
// 	    if(target < 0) return 0;
	    
// 	    int MOD = 1e9 + 7;
	    
// 	    int include = solve(arr, size, target - arr[index], index + 1) % MOD;
// 	    int exclude = solve(arr, size, target, index + 1) % MOD;
	    
// 	    return (include + exclude) % MOD;
// 	}
	
// 	int perfectSum(int arr[], int n, int sum)
// 	{
//   // to handle 0's
// 	    sort(arr, arr+n);
//         return solve(arr, n, sum, 0);
// 	}

	int solve(int arr[], int size, int target, int index, vector<vector<int>> &dp){
	    
	    if(index == size){
	        if(target == 0) return 1;
	        else return 0;
	    }
	    
	    if(target == 0) return 1;
	    if(target < 0) return 0;
	    
	    if(dp[index][target] != -1) return dp[index][target];
	    
	    int MOD = 1e9 + 7;
	    
	    int include = solve(arr, size, target - arr[index], index + 1, dp) % MOD;
	    int exclude = solve(arr, size, target, index + 1, dp) % MOD;
	    
	    return dp[index][target] = (include + exclude) % MOD;
	}
	
	int perfectSum(int arr[], int n, int sum)
	{
     // to handle 0's
	    sort(arr, arr+n);
	    
	    vector<vector<int>> dp(n+1, vector<int> (sum + 1, -1));
        return solve(arr, n, sum, 0, dp);
	}
