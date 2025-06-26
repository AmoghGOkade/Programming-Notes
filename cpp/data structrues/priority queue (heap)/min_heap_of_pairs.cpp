priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

//pq is now a min heap
//the pair with the minimum 1st element is top()

void print(priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq)
{
    while (pq.size()!=0)
    {
        cout<<pq.top().first<<" "<<pq.top().second<<endl;
        pq.pop();
    }
}
