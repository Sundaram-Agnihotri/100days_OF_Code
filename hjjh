class Solution {
    double isPossible(int [] dist,  int midspeed){
        double time = 0.0;
        for (int i =0; i<dist.length-1; i++){
            double t = (double)dist[i]/ (double)midspeed;
                time +=  Math.ceil(t);
        }
         time +=(double)dist[dist.length-1]/ (double)midspeed;
         return time;
    }
    public int minSpeedOnTime(int[] dist, double hour) {
        int l =1; 
        int r = (int)1e7;
        int minspeed = -1;
        while (l<=r){
            int midspeed = l+(r-l)/2;
             if (isPossible(dist, midspeed)<= hour){
                 minspeed = midspeed;
                 r = midspeed-1;
             }
             else {
                 l = midspeed+1;
             }
        }
        return minspeed;
    }
}
