#include <bits/stdc++.h>
using namespace std;

bool isPossibe(vector<int> &v, int k,int mid)
{
    int cowcount=1;
    int lastpos=v[0];
    for(int i=0;i<v.size();i++)
    {
        if(v[i]-lastpos>=mid)
        {
            cowcount++;
            if(cowcount==k)
                return true;
            
            lastpos=v[i];        
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(),stalls.end());
    int n=stalls.size();
    int s=0;
    int e=stalls[n-1];
    int ans=0;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(isPossibe(stalls,k,mid))
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
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		vector<int> v;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
		}
		cout<<aggressiveCows(v,k)<<endl;
	}

	return 0;
}