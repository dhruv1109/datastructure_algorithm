#include<bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/squares-of-a-sorted-array/
// Since we need to put squeres in result array, we can consider that all numbers are positive (since: -4**2 = 4**2 = 16).
// we can have two pointers l to left most element, r to most right element. Create res result array same size as A.
// Move from right to left in res and past max(abs(A[l]), abs(A[r])), move correspondingly l++ or r--.

vector<int> sortedSquares(vector<int>& A) 
{    
    vector<int> res(A.size());
    int l = 0, r = A.size() - 1;
    for (int k = A.size() - 1; k >= 0; k--) {
        if (abs(A[r]) > abs(A[l])) 
            res[k] = A[r] * A[r--];
        else 
            res[k] = A[l] * A[l++];
    }
    return res;
}

int main()
{
    int m;
    cin>>m;
    vector<int> v;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    vector<int> ans;
    ans=sortedSquares(v);
    for(auto i:ans)
        cout<<i<<" ";
    
    return 0;
}