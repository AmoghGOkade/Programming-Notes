//Vector
void print(vector<int>& v)
{
    for (int i=0; i<v.size(); i++)
    {
       cout<<v[i]<<",";
    }
    cout<<endl;
}

//Map
void print(unordered_map<int, int>& m)
{
    for (auto it = m.begin(); it!=m.end(); it++)
    {
        cout<<it->first<<":"<<it->second<<endl;
    }
}
