#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/arithmetic-slices/

int numberOfArithmeticSlices(vector<int>& A) 
{       
    int n=A.size();
        if(n<3) return 0;
    
    int ans=0,curr=0,last_diff=A[1]-A[0];
    
    for(int i=1;i<n-1;++i){
        int curr_diff=A[i+1]-A[i];  
        
        if(curr_diff==last_diff){ 
            ++curr;
        }
        else{
            last_diff=curr_diff; 
            curr=0;
        }
        ans+=curr; 
    }
    return ans; 
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
    cout<<numberOfArithmeticSlices(v);
    return 0;
}