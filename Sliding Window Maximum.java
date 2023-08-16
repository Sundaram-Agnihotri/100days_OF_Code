class Solution {
    public int[] maxSlidingWindow(int[] arr, int k) {
        int n= arr.length;
        int [] ans = new int [n-k+1];
        int ind = 0;
        Deque <Integer> q = new ArrayDeque <>();

    for (int i =0; i< n; i++){
        if (!q.isEmpty()&& q.peek()==i-k){
            q.poll();
        }
        while (!q.isEmpty()&&arr[q.peekLast()]<arr[i]){
            q.pollLast();
        }
        q.add(i);
        if (i >= k-1)
        ans[ind++] = arr[q.peek()];
    }
    return ans;
    }
}
