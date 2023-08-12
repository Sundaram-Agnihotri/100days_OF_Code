



class Solution 
{
    //Function to find length of longest increasing subsequence.
    static int longestSubsequence(int size, int a[])
    {
        // code here
        ArrayList<Integer> list = new ArrayList<>();
        
        for (int num : a) {
            int index = Collections.binarySearch(list, num);
            if (index < 0) {
                index = -index - 1;
                if (index == list.size()) {
                    list.add(num);
                } else {
                    list.set(index, num);
                }
            }
        }
        
        return list.size();
    }
    
} 
