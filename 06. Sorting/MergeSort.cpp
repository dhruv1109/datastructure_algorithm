#include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int s,int e)
{
    int m=(s+e)/2;
    int l1=m-s+1;   
    int l2=e-m;
    int *fir=new int[l1];
    int *sec=new int[l2];
    int main_idx=s;
    for(int i=0;i<l1;i++)
        fir[i]=arr[main_idx++];

    main_idx=m+1;

    for(int i=0;i<l2;i++)
        sec[i]=arr[main_idx++];

    int i1=0,i2=0;
    main_idx=s;
    while(i1<l1 && i2<l2)
    {
        if(fir[i1]<sec[i2])
            arr[main_idx++]=fir[i1++];
        else
            arr[main_idx++]=sec[i2++];
    }
    while(i1<l1)
        arr[main_idx++]=fir[i1++];
    while(i2<l2)
        arr[main_idx++]=sec[i2++];

    delete []fir;
    delete []sec;
}

void mergesort(int *arr, int s,int e)
{
    if(s>=e)
        return;
    
    int m=(s+e)/2;
    mergesort(arr,s,m);
    mergesort(arr,m+1,e);
    merge(arr,s,e);
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

}