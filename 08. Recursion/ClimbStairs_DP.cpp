//using DP
#include<bits/stdc++.h>
using namespace std;

int climbStairs(int n) 
{
    vector<int> steps(n,0);
    if(n==0)
        return 1;
    if(n==1)
        return 1;
    if(n==2)
    return 2;

    steps[0]=1;
    steps[1]=2;
    for(int i=2;i<n;i++)
    {
        steps[i]=steps[i-2]+steps[i-1];
    }
    return steps[n-1];
}

int main()
{
    int n;
    cin>>n;
    cout<<climbStairs(n);
}