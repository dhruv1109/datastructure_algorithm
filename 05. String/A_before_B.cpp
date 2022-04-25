// https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkString(string s) {
        for(int i=1;i<s.size();i++)
        {
            if(s[i-1]=='b' &&s[i]=='a')
                return false;
        }
        return true;
    }
};

class Solution {
public:
    bool checkString(string s) {
        bool check=false;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='b')
                check=true;
            if(s[i]=='a'&&check)
                return false;
        }
        return true;
    }
};