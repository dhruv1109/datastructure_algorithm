#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/reverse-integer/

int reverse(int n) 
{ 
    int ans=0;
    int r=0;
    
    while(n)
    {
        r=n%10;
        if(ans<INT_MIN/10 || ans>INT_MAX/10)
            return 0;            
        ans=ans*10 + r;
        n/=10;            
    }        
    return ans;       
    
}

int main()
{
    int n;
    cin>>n;
    cout<<reverse(n);
}