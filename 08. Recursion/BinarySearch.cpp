#include<bits/stdc++.h>
using namespace std;

bool binary(int *arr,int key,int s,int e)
{
    if(s>e)
        return false;
    
    int m=(s+e)/2;
    if(arr[m]==key)
        return true;

    if(arr[m]<key)
        return binary(arr,key,m+1,e);
    else
        return binary(arr,key,s,m-1);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int key;
    cin>>key;
    if(binary(arr,key,0,n-1))
        cout<<"PRESENT";
    else
        cout<<"ABSENT";
}