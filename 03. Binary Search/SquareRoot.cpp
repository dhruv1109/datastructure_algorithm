#include<bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/sqrtx/

long long int mySqrt(int x) {
    
    long long int l=0;
    long long int h=x;
    long long int ans=-1;
    while(l<=h)
    {
        long long int mid=l+(h-l)/2;
        long long int sq= mid*mid;
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

int main()
{
    int n;
    cin>>n;
    cout<<mySqrt(n);
}