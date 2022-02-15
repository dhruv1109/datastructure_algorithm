#include<iostream>
#include <math.h>
using namespace std;

// The integer 5 is "101" in binary and its complement is "010" which is the integer 2
// using bit masking

int bitwiseComplement(int m) {
        
    int n=m;
    int count=0,mask=0;
    if(n==0)
        return 1;
        
    while(n!=0)
    {
        n=n>>1;
        mask=(mask<<1)|1;
    }
    return (~m) & mask ;    
}

int main()
{
    int n;
    cin>>n;
    cout<<bitwiseComplement(n);
}