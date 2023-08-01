class Solution {
    // Function to return a list containing the DFS traversal of the graph.
  
        // Code here
        public static ArrayList<Integer> dfsOfGraph(int V, ArrayList<ArrayList<Integer>> adj) {

        ArrayList<Integer> ans = new ArrayList<>();
        boolean visited[] = new boolean[V];
        for(int i=0; i<V; i++) {
            if(!visited[i]) {
                dfsUtil(i,visited,ans,adj);
            }
        }
        return ans;
    }

    public static void dfsUtil(int curr, boolean vis[], ArrayList<Integer> ans, ArrayList<ArrayList<Integer>> adj) {
        vis[curr] = true;
        ans.add(curr);
        for(int i=0; i<adj.get(curr).size(); i++) {
            if(!vis[adj.get(curr).get(i)]) {
                dfsUtil(adj.get(curr).get(i),vis,ans,adj);
            }
        }
    
    }
}
