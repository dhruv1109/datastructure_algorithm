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
    int pvtidx=s+count;
    while(i<pvtidx && j>pvtidx)
    {
		while(arr[i]<pivot)
            i++;
        while(arr[j]>pivot)
            j--;
        if(i<pvtidx && j>pvtidx)
            swap(arr[i++],arr[j--]);       
    }
    return pvtidx;
}

void quicksort(int *arr, int s,int e)
{
    while(s<e)
	{
		int p=partition(arr,s,e);
		if(p-s<e-p)
		{
			quicksort(arr,s,p-1);
			s=p+1;
		}
		else
		{
			quicksort(arr,p+1,e);
			e=p-1;
		}	
	}
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