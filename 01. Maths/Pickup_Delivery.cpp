#include<bits/stdc++.h>
using namespace std;

// Question -> https://leetcode.com/problems/count-all-valid-pickup-and-delivery-options/
// My detailed answer -> https://leetcode.com/problems/count-all-valid-pickup-and-delivery-options/discuss/1823891/100-faster-C%2B%2B-solution-based-on-loop

int countOrders(int n) 
{
    int m=1e9+7;
    long long int ans=1; // long long to avoid integer overflow
    for(int i=1;i<=n;i++)
    {
        ans=ans*i;  // calculating factorial.
        ans=ans%m;
        ans=ans*((2*i)-1);  //multilying by a factor of 2n-1 
        ans=ans%m;
    }
    ans=ans%m;
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<countOrders(n);
}