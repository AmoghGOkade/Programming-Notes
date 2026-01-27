//Using min-heap is better than iterating once through the nodes to find the minimum distance and then the node with the minimum distance (obviously).
//Not using adjacency list worsens the time complexity. So, it is always worth it to create an adjacency list from whatever form of graph they have given

vector<int> dijkstra(vector<vector<pair<int,int>>>& adj, int start)
{
    int no_nodes = adj.size();
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;      // Min-heap (priority queue) storing pairs of (distance, node)
    vector<int> dist(no_nodes, INT_MAX);
    int curr, weight, neighbour;

    dist[start] = 0;
    pq.push(make_pair(0, start));

    // Process the queue until all reachable vertices are finalized. If any node(s) is not visited because of being unconnected, its (their) final dist will be INT_MAX
    while (pq.size() != 0)
    {
        curr = pq.top().second;

        // If this distance not the latest shortest one, skip it. This is because we may have pushed a distance earlier that got better in a following iteration
        if (pq.top().first > dist[curr])
        {
            pq.pop();
            continue;
        }

        pq.pop();
        for (int i=0; i<adj[curr].size(); i++)       // Explore all neighbors of the current vertex
        {
            weight = adj[curr][i].second;
            neighbour = adj[curr][i].first;
            
            if (dist[curr] + weight < dist[neighbour])       // If we found a shorter path to v through u, update it
            {
                dist[neighbour] = dist[curr] + weight;
                pq.push(make_pair(dist[neighbour], neighbour));    //if values are pushed into the pq in any other way (line of code), then a visited 'bool map' will be needed
            }
        }
    }

    return dist;
}
