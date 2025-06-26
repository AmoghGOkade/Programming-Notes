vector<int> v = {2, 5, 4, 1, 3};

int mini = *min_element(v.begin(), v.end());    //stores the minimum element

auto it = max_element(v.begin(), v.end());
//gives a pointer to the index of the max element in v

int index_having_max = it - v.begin();
//gives the index of the maximum element
