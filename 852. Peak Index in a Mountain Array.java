class Solution {
    public int peakIndexInMountainArray(int[] arr) {
        int max = 0;
        int count =0;
        for (int i =0;  i<arr.length; i++){
            if (max<arr[i]){
                max = arr[i];
                count =i;
            }
        }
        return count;
        
    }
}
