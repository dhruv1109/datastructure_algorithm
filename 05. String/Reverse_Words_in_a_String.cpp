// Reverse Words in a String
// https://leetcode.com/problems/reverse-words-in-a-string/

class Solution {
public:
    string reverseWords(string s){
        
        stringstream str(s);
        string word,ans="";
        while(str >> word)
            ans = word + " " + ans;
        
        ans.pop_back();
        return ans; 
    }
};