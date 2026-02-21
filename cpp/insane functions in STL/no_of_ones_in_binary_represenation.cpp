int n = 57430215;
int ones = __builtin_popcount(n);    //maps to an assembly (hardware) instruction, so very fast

//__builtin_popcountll() for long long

//faster than looping over n (while loop) and doing n=n/2, because this goes over all bits of n
