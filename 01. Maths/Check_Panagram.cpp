#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/check-if-the-sentence-is-pangram/

bool checkIfPangram(string sentence) 
{   
    map<char,int>hash;
    for(auto c:sentence)   
        hash[c]++;
    return hash.size() == 26;
}

int main()
{
    string s;
    cin>>s;
    cout<<checkIfPangram(s);
}