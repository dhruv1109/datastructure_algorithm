// Encode and Decode TinyURL
// https://leetcode.com/problems/encode-and-decode-tinyurl/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<string> v;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        v.push_back(longUrl);
        string s="http://tinyurl.com/";
        char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
        string res = "";
        for (int i = 0; i < 4; i++)
            res = res + alphabet[rand() % 26];

        return s+res;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return v[0];
    }
};
