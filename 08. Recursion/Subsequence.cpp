#include<bits/stdc++.h>
using namespace std;

void solve(string str,string s,int id,vector<string>& ans)
{
	if(id>str.size()-1)
	{
		if(s!="")
			ans.push_back(s);
		
		return;
	}
	// excludes
	solve(str,s,id+1,ans);
    // includes
	s+=str[id];
	solve(str,s,id+1,ans);
}

vector<string> subsequences(string str)
{
	vector<string> ans;
	string s="";
	int id=0;
	solve(str,s,id,ans);
	return ans;
}

int main()
{
    string s;
    cin>>s;
    vector<string> ans;
    ans=subsequences(s);
    for(auto i:ans)
        cout<<i<<" ";
}