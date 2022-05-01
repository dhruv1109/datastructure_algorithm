// Letter Combinations of a Phone Number
// https://leetcode.com/problems/letter-combinations-of-a-phone-number/

#include<bits/stdc++.h>
using namespace std;

void solve(string digits,string out,int id, vector<string>& ans,string map[])
{
    if(id>digits.length()-1)
    {
        ans.push_back(out);
        return;
    }
    int num=digits[id]-'0';
    string val=map[num];
    for(int i=0;i<val.length();i++)
    {
        out.push_back(val[i]);
        solve(digits,out,id+1,ans,map);
        out.pop_back();
    }
}
    
vector<string> letterCombinations(string digits) 
{    
    vector<string> ans;
    if(digits.length()==0)
        return ans;
    string out="";
    int id=0;
    string map[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(digits,out,id,ans,map);
    return ans;
}

int main()
{
    string s;
    cin>>s;
    vector<string> ans;
    ans=letterCombinations(s);
    for(auto i:ans)
        cout<<i<<" ";
}
