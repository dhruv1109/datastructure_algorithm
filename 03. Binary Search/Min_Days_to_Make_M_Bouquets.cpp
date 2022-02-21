#include<bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/

bool isValid(vector<int>& v,int m,int k,int mid){
    int adj=0,bough=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>mid){
            adj=0;
        }
        else if(++adj>=k){
            bough++;
            adj=0;
        }
    }
    if(bough>=m)
        return true;
    return false;
}

int minDays(vector<int>& bloomDay, int m, int k) {
    if(bloomDay.size() < (k*m)) 
    return -1;
    
    int low=1;
    int high=1e9;
    int result=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(isValid(bloomDay,m,k,mid)){
            result=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return result;
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
    int k,m;
    cin>>m>>k;
    cout<<minDays(v,m,k);
}