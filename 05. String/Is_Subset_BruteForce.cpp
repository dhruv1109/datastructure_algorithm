#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/is-subsequence/

bool isSubsequence(string s, string t)
{
    int i=0;
    for(int j=0;j<t.size() && i<s.size();j++)
    {
        if(t[j]==s[i])
            i++;
    }
    return (s.size()==i);
}

int main()
{
    string s,t;
    cin>>s>>t;
    cout<<isSubsequence(s,t);

    return 0;

}