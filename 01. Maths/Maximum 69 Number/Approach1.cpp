//https://leetcode.com/problems/maximum-69-number/

// O(N) time
// O(N) space

class Solution {
public:
    int maximum69Number (int num) {
        string s= to_string(num);
        for (auto &c : s) {
            if (c == '6') {
                c = '9';
                break;
            }
        }
        return stoi(s);
    }
};