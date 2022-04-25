#include<bits/stdc++.h>
using namespace std;

bool pal(string s,int i,int j)
{
	if(i>j)
		return true;
	
	if(s[i]!=s[j])
        return false;
    else
	    pal(s,++i,--j);
}

int main()
{
    string str;
    cin>>str;
    if(pal(str,0,str.size()-1))
        cout<<str<<" IS A PALINDROME"<<endl;
    else
        cout<<str<<" IS NOT A PALINDROME"<<endl;
}