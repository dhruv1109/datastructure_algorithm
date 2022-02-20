#include<bits/stdc++.h>
using namespace std;

//https://www.codingninjas.com/codestudio/problems/painter's-partition-problem_1089557?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0

bool isPossible(vector<int>& v, int painter, int mid)
{
    int k=1;
    int n=v.size();
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum+v[i]<=mid)
            sum+=v[i];
        else
        {
            k++;
            if(k>painter || v[i]>mid)
                return false;
            
            sum=v[i];
        }
    }
    return true;    
}   

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int ans=-1;
    int s=0;
    int n=boards.size();
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=boards[i];
    
    int e=sum;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(isPossible(boards,k,mid))
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
    int k;
    cin>>k;
    cout<<findLargestMinDistance(v,k);
}