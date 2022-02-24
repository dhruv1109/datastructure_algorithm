#include<bits/stdc++.h>
using namespace std;

//https://practice.geeksforgeeks.org/problems/count-squares3649/1#

long long int root(int x) 
{
    long long int l=0;
    long long int h=x;
    long long int ans=-1;
    while(l<=h)
    {
        long long int mid=l+(h-l)/2;
        long long int sq= mid*mid;
        if(sq==x)
            return mid;
        if(sq>x)
            h=mid-1;
        else
        {
            ans=mid;
            l=mid+1;
        }      
    }
    return ans; 
}
long long int countSquares(int n) {
    // code here
    long long int ans=root(n);
    if(ans*ans==n)
    return ans-1;
    else
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<countSquares(n);
}