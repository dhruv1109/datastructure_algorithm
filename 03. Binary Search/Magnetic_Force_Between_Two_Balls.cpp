#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/magnetic-force-between-two-balls/

bool isPossibe(vector<int> &v, int k,int mid)
{
    int balls=1;
    int lastpos=v[0];
    for(int i=0;i<v.size();i++)
    {
        if(v[i]-lastpos>=mid)
        {
            balls++;
            if(balls==k)
                return true;

            lastpos=v[i];        
        }
    }
    return false;
}
int maxDistance(vector<int>& position, int m) 
{
    
    sort(position.begin(),position.end());
    int n=position.size();
    int s=0;
    int e=position[n-1];
    int ans=0;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(isPossibe(position,m,mid))
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;            
        }        
    }
    return ans;
}

int main() {
	
	// your code here

    int n,k;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<maxDistance(v,k)<<endl;
	

	return 0;
}