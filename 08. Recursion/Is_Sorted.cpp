#include<bits/stdc++.h>
using namespace std;

bool sorted(int *arr,int size)
{
    if(size==0||size==1)
        return true;
    
    if(arr[0]>arr[1])
        return false;
    else
        return sorted(arr+1,size-1);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    if(sorted(arr,n))
        cout<<"ARRAY IS SORTED";
    else
        cout<<"ARRAY IS NOT SORTED";
}