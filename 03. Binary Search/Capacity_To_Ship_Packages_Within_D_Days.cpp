#include<bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/

bool isPossible(vector<int>& v, int days, int mid)
{
    int d=1;
    int n=v.size();
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum+v[i]<=mid)
            sum+=v[i];
        else
        {
            d++;
            if(d>days || v[i]>mid)
                return false;
            
            sum=v[i];
        }
    }
    return true;
    
}
    
int shipWithinDays(vector<int>& weights, int days) {
    int ans=-1;
    int s=0;
    int n=weights.size();
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=weights[i];
    
    int e=sum;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(isPossible(weights,days,mid))
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
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int days;
    cin>>days;
    cout<<shipWithinDays(v,days);
}
