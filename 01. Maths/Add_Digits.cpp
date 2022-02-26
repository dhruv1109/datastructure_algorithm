
#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/add-digits/
// eg i/p = 38 --> o/p = 2 
//38 --> 3 + 8 --> 11 ; 11 --> 1 + 1 --> 2 
// Since 2 has only one digit, return it.

int addDigits(int num) 
{
    if(num==0)
        return 0;
    if(num%9==0)
        return 9;
    
    return num%9;
}

int main() {
	
    int n;
    cin>>n;
    cout<<addDigits(n);

	return 0;
}