void my_swap(int* p, int* q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}
void bubble_sort(vector<int>& temp)
{
    int n = temp.size();
    bool swapped = false;
    for (int a=0; a<n-1; a++)
    {
        for (int b=0; b<n-a-1; b++)
        {
            if (temp[b] > temp[b+1]) 
            {
                my_swap(&temp[b], &temp[b+1]);
                swapped = true;
            }
        }
        if (swapped == false) break;
        swapped = false;
    }
}
