#include<bits/stdc++.h>
using namespace std;

void solve(string& s,int i,int j)
{
	if(i>j)
		return;
	
	swap(s[i],s[j]);
	solve(s,++i,--j);
}
int main()
{
    string str;
    cin>>str;
    cout<<"BEFORE "<<str<<endl;
    solve(str,0,str.size()-1);
    cout<<"AFTER "<<str<<endl;
}
