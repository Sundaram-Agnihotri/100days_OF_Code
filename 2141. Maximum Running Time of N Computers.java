class Solution {
    public long maxRunTime(int n, int[] batteries) {
long start = 0;
        long end = (long)1e14;
        long ans = -1;

        while(start <= end){
            long mid = end - (end - start)/2;
            if(isPossible(n, batteries, mid)){
                ans = mid;
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return ans;
    }

public boolean isPossible(int n, int[] batteries, long time){
        long sum = 0;

        for(int i = 0 ; i < batteries.length ; i++){
            sum += Math.min(batteries[i],time);
        }

        if((sum/n) >= time){
            return true;
        }
        return false;
    }
}
