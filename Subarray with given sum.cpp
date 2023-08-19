  long long sum = 0;
        int j = 0;
        for(int i=0; i<n; i++) {
            sum += arr[i];
            while(sum > s && j<=i) {
                sum -= arr[j++];
            }
            if(sum == s && j<=i)
                return {j+1, i+1};
        }
        
        return {-1};
