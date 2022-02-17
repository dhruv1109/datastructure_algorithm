#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int rem,ans=0,i=0;
    cin>>n;

    while(n!=0)
    {
        rem=n&1;
        int a = rem * pow(10,i);
        ans=ans+a;
        i++;
        n=n>>1;
    }
    cout<<ans;

    return 0;
}
