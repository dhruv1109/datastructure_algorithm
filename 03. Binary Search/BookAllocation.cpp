#include<bits/stdc++.h>
using namespace std;

bool isPossible(int a[], int n, int m, int mid)
{
    int student=1;
    int pagecount=0;
    for(int i=0;i<n;i++)
    {
        if(pagecount+a[i]<=mid)
            pagecount+=a[i];
        else
        {
            student++;
            if(student>m || a[i]>mid)
            return false;
            
            pagecount=a[i];
        }
    }
    return true;
}
    
int findPages(int a[], int n, int m) 
{
    //code here
    int s=0,sum=0,ans=-1;
    for(int i=0;i<n;i++)
    sum+=a[i];
    
    int e=sum;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(isPossible(a,n,m,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else
            s=mid+1;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int m;
    cin>>m;
    cout<<findPages(a,n,m);
}
