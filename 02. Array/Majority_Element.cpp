#include<bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/majority-element/solution/ 
// element appearing more than n/2 time

//Brute Force -> pick 1 element and check if its occurance in array is more than n/2 time
//o(n^2)

//Use Hash Map -> o(n) if we use array or o(nlogn) if we use inbuilt c++ map

//Moore Voting Algo -> o(n) and space o(1)


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int count = 0;
    int candidate = 0;

    for(int i=0;i<n;i++)
    {
        if(count==0)
            candidate=a[i];

        if(candidate == a[i])
            count++;
        else
            count--;
    }
    cout<<candidate;

}