#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int l=0;
    int h=n-1;
    int m=l+(h-l)/2;
    while(l<h)
    {
        if(arr[m]<arr[m+1])
            l=m+1;
        else 
            h=m;
            
        m=l+(h-l)/2;          
    }
    cout<<l<<endl;
}