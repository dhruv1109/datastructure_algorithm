#include<bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/power-of-three/

// 3 is a prime number. So, any power of 3 will only be divisible by lower or equal powers of 3.
// The largest power of 3 less than 2^31 is 1162261467 (can be found by 3^( log3(2^31 - 1) ) = 3^19 = 1162261467 ).So, this number will only be divisible by a power of 3.
// Thus, we can only check if the above number is divisible by n. If n is a power of 3, then only it will be completely divisible by n.

bool isPowerOfthree(int n) 
{
    return n > 0 && 1162261467 % n == 0;
	// pow(3, floor(log(INT_MAX)/log(3))) = 1162261467 
}

int main()
{
    int n;
    cin>>n;
    cout<<isPowerOfthree(n);
}