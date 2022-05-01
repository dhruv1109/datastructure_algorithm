#include<bits/stdc++.h>
using namespace std;

int partition(int *arr, int s,int e)
{
    int pivot=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<pivot)
            count++;
    }
    swap(arr[s],arr[s+count]);
    int i=s;
    int j=e;
    while(i<j)
    {
        if(arr[i]>pivot && arr[j]<pivot)
            swap(arr[i++],arr[j--]);
        
        if(arr[i]<pivot)
            i++;
        if(arr[j]>pivot)
            j--;
    }
    return i;
}

void quicksort(int *arr, int s,int e)
{
    if(s>=e)
        return;

    int p=partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
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
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

}