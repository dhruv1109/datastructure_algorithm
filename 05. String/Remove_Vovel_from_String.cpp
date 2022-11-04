// Reverse Vovels in a String
// https://leetcode.com/problems/reverse-vowels-of-a-string/
 
class Solution {
public:
    
    bool isVowel(const char& c)
    {
        if( c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' ||c == 'A' || c == 'E' || c == 'I' || c == 'U' || c == 'O')
            return true;
        
        return false;
    }
    
    string reverseVowels(string s) {
        
        int left = 0, right = s.length() - 1;
        while (left < right)
        {
            while (left < right && !isVowel(s[left]))
                left++;
            while (right > left && !isVowel(s[right]))
                right--;
            
            swap(s[left], s[right]);
            
            left++;
            right--;
        }
        
        return s;
        
    }
};