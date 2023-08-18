class Solution {
  public int maximalNetworkRank(int n, int[][] roads) {
    Map<Integer, Set<Integer>> graph = new HashMap<>();
    for (int city = 0; city < n; city++)
      graph.put(city, new HashSet<>());
    for (int[] edge : roads) {
      int u = edge[0];
      int v = edge[1];
      graph.get(u).add(v);
      graph.get(v).add(u);
    }
    int result = 0;
    for (int u = 0; u < n; u++) {
      for (int v = u + 1; v < n; v++) {
        boolean areNeighbors = graph.get(u).contains(v);
        if (areNeighbors)
          result = Math.max(result, graph.get(u).size() + graph.get(v).size() - 1);
        else
          result = Math.max(result, graph.get(u).size() + graph.get(v).size());
      }
    }

    return result;
  }
}
