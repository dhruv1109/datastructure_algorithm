#include<iostream>
#include <math.h>
using namespace std;

// The integer 5 is "101" in binary and its complement is "010" which is the integer 2

int bitwiseComplement(int n) {
        
    if(n==0)
        return 1;
    int ans=0,i=0;
        
    while(n!=0)
    {
        int bit=!(n&1);
        ans=ans+bit*pow(2,i);
        i++;
        n=n>>1;
    }
    return ans;
        
}

int main()
{
    int n;
    cin>>n;
    cout<<bitwiseComplement(n);
}