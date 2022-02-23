#include<bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/majority-element-ii/
// element appearing more than n/3 time

//Brute Force -> pick 1 element and check if its occurance in array is more than n/2 time
//o(n^2)

//Use Hash Map -> o(n) if we use array or o(nlogn) if we use inbuilt c++ map

//Moore Voting Algo -> o(n) and space o(1). Extension of n/2 question. Here just use 2 numbers


int main()
{
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    
    int s=nums.size();
    int num1=0,num2=0,c1=0,c2=0;
    for(auto el:nums)
    {
        if(el==num1)
            c1++;
        else if(el==num2)
            c2++;
        else if(c1==0)
        {
            num1=el;
            c1=1;
        }
        else if(c2==0)
        {
            num2=el;
            c2++;
        }
        else
        {
            c1--;
            c2--;
        }  
    }
    c1=0;
    c2=0;
    vector<int> ans;
    for(auto el:nums)
    {
        if(el==num1)
            c1++;
        else if(el==num2)
            c2++;
    }
    if(c1>s/3)
        ans.push_back(num1);
    if(c2>s/3)
        ans.push_back(num2);

    for(auto i:ans)
        cout<<i<," ";

}