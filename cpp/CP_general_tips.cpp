//In map, you don't have to do:- 
if (elem in map) map[elem]++;
else map[elem] = 0;
//You can just do 
map[elem]++      //It automatically initializes to 0 if not found.

//If there are 3 ints a, b and c; and we want to check if (a > b*c) or something
//If b*c is too high to store in an int, it will give runtime error saying 'integer overflow'
//To fix this, we don't have to change b and c to long long. We can just do
if (a > (long long) b*c) return -1;
