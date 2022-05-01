// Backspace String Compare
// https://leetcode.com/problems/backspace-string-compare/

// s = "ab#c", t = "ad#c" -> true
// s = "ab##", t = "c#d#" -> true
// s = "a#c", t = "b" -> false

#include<bits/stdc++.h>
using namespace std;

bool backspaceCompare(string s, string t) 
{
    stack<char>s1;
    stack<char>s2;
    for(auto i:s)
    {
        if(s1.empty() && i=='#')
            s1.push(i);
        if(i=='#')
            s1.pop();
        else
            s1.push(i);
    }
    for(auto i:t)
    {
        if(s2.empty() && i=='#')
            s2.push(i);
        if(i=='#')
            s2.pop();
        else
            s2.push(i);
    }
    if(s1==s2)
        return true;
    
    return false;
}
