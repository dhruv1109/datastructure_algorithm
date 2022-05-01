#include<bits/stdc++.h>
using namespace std;

void solve(string s,string out,int id, vector<string>& ans)
{
    if(id>s.length()-1)
    {
        ans.push_back(out);
        return;
    }
    for(int i=id;i<s.length();i++)
    {
        swap(s[i],s[id]);
        out=s;
        solve(s,out,id+1,ans);
    }
}
    
vector<string> perm(string s) 
{    
    vector<string> ans;
    string out="";
    int id=0;
    solve(s,out,id,ans);
    return ans;
}

int main()
{
    string s;
    cin>>s;
    vector<string> ans;
    ans=perm(s);
    for(auto i:ans)
        cout<<i<<" ";
}
