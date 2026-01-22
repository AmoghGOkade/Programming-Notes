#include <vector>
using namespace std;

int main()
{
  vector<int> v = {1, 2, 3};
  v.push_back(5);    //{1, 2, 3, 5}
  
  v.insert(v.begin() + 1, 6);      //inserts 6 at index 1:- {1, 6, 2, 3, 5}
  
  v.pop_back();    //pops 5:- {1, 6, 2, 3}
  
  v.erase(find(v.begin(), v.end(), 2));    //removes 2:- {1, 6, 3}
  
  v.erase(v.begin() + 1);      //deletes element at index 1:- {1, 3}
  
  v.erase(v.begin(), v.begin() + 2);    //deletes elements in the range [0, 2) indices:- {}

  return v.size();
}
