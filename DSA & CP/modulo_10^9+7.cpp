//Any operation relating the modulo only comes when computing the answer (that you need to return as modulo 10^9 + 7)
//The key is to just add a %M smartly wherever any such computation happens

//In some cases, long long ints can handle whatever values you are expected to use %M for. (Leetcode 1339. Maximum product of splitted binary tree)
//In such cases, computation can just be done using long long ints and the final return statement can have a %M.

#define M 1000000007

( a + b ) % M = ( ( a % M ) + ( b % M ) ) % M;
( a * b ) % M = ( ( a % M ) * ( b % M ) ) % M;
( a - b ) % M = ( ( a % M ) - ( b % M ) ) % M;

//Better to have a and b as long ints instead of ints to avoid any chance of overflow

( a % b ) != ( a % ( b % M ) );
