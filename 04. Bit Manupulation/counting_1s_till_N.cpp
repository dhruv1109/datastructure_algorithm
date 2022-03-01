#include<bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/counting-bits/

vector<int> countBits(int n)
{
    vector<int> ans;
    for(int i=0;i<=n;i++)
    {
        int x=i;
        int count=0;
        while(x)
        {
            if(x&1)
                count++;
            
            x=x>>1;                    
        }
        ans.push_back(count);
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<int> ans;
    ans=countBits(n);
    for(auto s: ans)
    cout<<s<<" ";

    return 0;

}