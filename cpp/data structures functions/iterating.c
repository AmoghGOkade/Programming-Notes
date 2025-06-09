//Vector
M1:- for (int i=0; i<v.size(); i++) cout<< v[i] << " ";
M2:- for (auto it = v.begin(), it != v.end(), it++) cout<< *it << " ";

//Map (both)
for (auto it = m.begin(); it != m.end(); it++) cout << it->first << " " << it->second;

//Priority queue (removes elements)
while (pq.empty() == 0)
{
  cout<< pq.top() << " ";
  pq.pop();
}

//Array, string
for (int i=0; i<s_arr.size(); i++) cout<< s_arr[i] << " ";
