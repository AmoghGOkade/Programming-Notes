vector<int> get_components(int n, unordered_map<int, vector<int>>& adj)
{
    vector<int> comps(n, -1);
    int comp_no = 1;
    for (int i=0; i<n; i++)
    {
        if (comps[i]==-1) 
        {
            bfs_fill_components(adj, i, comp_no, comps);
            comp_no+=1;
        }
    }
    return comps;
}
void bfs_fill_components(unordered_map<int, vector<int>>& adj, int start, int comp_no, vector<int>& comps)
{
    int curr, next;
    queue<int> q;
    q.push(start);
    comps[start]=comp_no;

    while (q.size()!=0)
    {
        curr = q.front();   //nothing in this queue is already visited
        q.pop();
        for (int i=0; i<adj[curr].size(); i++)
        {
            next = adj[curr][i];
            if (comps[next]==-1)
            {
                q.push(next);
                comps[next]=comp_no;
            }
        }
    }
}
