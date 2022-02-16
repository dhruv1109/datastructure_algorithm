#include<bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/unique-number-of-occurrences/

bool uniqueOccurrences(vector<int>& arr) {
        
    unordered_map<int,int>m;
    unordered_set<int> s;
         
    for(int i=0;i<arr.size();i++)
    {
        m[arr[i]]++;
    }
        
    for(auto i:m)
    {
        s.insert(i.second);            
    }
    return m.size() == s.size();   
}

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<uniqueOccurrences(v);
}