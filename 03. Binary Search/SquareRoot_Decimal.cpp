#include<bits/stdc++.h>
using namespace std;

long long int mySqrtint(int x) {
    
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

double decimal(int n, int precision, long long int temp)
{
    double factor=1;
    double ans=temp;
    for(int i=0;i<precision;i++)
    {
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor)
        {
            ans=j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    long long int temp=mySqrtint(n);
    cout<<decimal(n,3,temp);
}
