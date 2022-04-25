#include<bits/stdc++.h>
using namespace std;

bool linear(int *arr,int key,int size)
{
    if(size==0)
        return false;
    if(arr[0]==key)
        return true;
    else
        return linear(arr+1,key,size-1);
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
    if(linear(arr,key,n))
        cout<<"PRESENT";
    else
        cout<<"ABSENT";
}