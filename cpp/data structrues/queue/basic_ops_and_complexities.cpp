#include <queue>    //FIFO

queue<int> q;
q.push(1);
q.push(2);
q.push(3);
cout << q.front();    //1
cout << q.back();     //3
q.pop();
cout << q.front();    //2

Inserting - O(1)
Deleting - O(1)
front() - O(1)
back() - O(1)
