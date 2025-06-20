In map, you don't have to do:- 
if (elem in map) map[elem]++;
else map[elem] = 0;
You can just do map[elem]++. It automatically initializes to 0 if not found.
