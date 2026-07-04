unordered_map<int, vector<pair<int, int>>> get_adj(vector<vector<int>>& edges)   //edges = [node1, node2, weight]
{
    unordered_map<int, vector<pair<int, int>>> adj;
    for (int i=0; i<edges.size(); i++)
    {
        adj[edges[i][0]].push_back(make_pair(edges[i][1], edges[i][2]));
        adj[edges[i][1]].push_back(make_pair(edges[i][0], edges[i][2]));    //bidirectional edge
    }
    return adj;
}
