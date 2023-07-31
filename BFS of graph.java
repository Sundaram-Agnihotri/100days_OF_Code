class Solution {
    // Function to return Breadth First Traversal of given graph.
    public ArrayList<Integer> bfsOfGraph(int V, ArrayList<ArrayList<Integer>> adj) {
        // Code here
        ArrayList<Integer> list = new ArrayList<>();
        boolean vis [] = new boolean[V];
        Queue<Integer> q = new  LinkedList<>();
        q.add(0);
        while (!q.isEmpty()){
            int node = q.poll();
             list.add(node);
                for(int it:adj.get(node)){
                if(vis[it]==false){
                    vis[it]=true;
                    q.add(it);
                }
            }
        }
        return list;
        
    }
}
