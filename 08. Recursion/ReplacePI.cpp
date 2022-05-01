#include<bits/stdc++.h>
using namespace std;

void solve(string s)
{
	if(s.size()==0)
		return;
	
	if(s[0]=='P'&&s[1]=='I')
    {
        cout<<"3.14";
        solve(s.substr(2));
    }
	else
    {
        cout<<s[0];
        solve(s.substr(1));
    }
}
int main()
{
    string str="PIPPPPIKWWEKOLWPIPPIAS";
    cout<<"BEFORE "<<str<<endl;
    cout<<"AFTER ";
    solve(str);
}