class Solution 
{
    public:
    //Function to find a Mother Vertex in the Graph.
void dfs(int i, vector<int>& vis, vector<int> adj[]) 
    {
        vis[i] = 1;
        for (auto adjNode : adj[i])
        {
            if (!vis[adjNode])
            {
                dfs(adjNode, vis, adj);
            }
        }
    }


    int findMotherVertex(int V, vector<int> adj[]) {
        vector<int> vis(V, 0);
        int lastVisited = 0;

        for (int i = 0; i < V; i++)
        {
            if (!vis[i]) {
                dfs(i, vis, adj);
                lastVisited = i;
            }
        }

        fill(vis.begin(), vis.end(), 0);
        
        dfs(lastVisited, vis, adj);

        for (int i = 0; i < V; i++) {
            if (vis[i] == 0) 
            {
                return -1; 
            }
        }

        return lastVisited; 
    }
