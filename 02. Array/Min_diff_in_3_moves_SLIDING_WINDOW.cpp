// Minimum Difference Between Largest and Smallest Value in Three Moves
// https://leetcode.com/problems/minimum-difference-between-largest-and-smallest-value-in-three-moves/

//    1. Chaning a number to any value is the same as removing them from array,
//       in the sense of calculating min difference.
//    2. Try to simplify the question, what if you were asked to change one value
//       from a sorted array and get the min difference of largest and smallest value of a sorted array?
//    3. You will probably get the answer of removing either the front or the end.
//    4. How about changing 2 numbers? You will either need to remove the first 2, last 2 or 1 from each end.
//    5. This is a sliding window.

// Sliding window for changing 3 elements
// [x, x, x, 4, 5, 6] -> diff = 6 - 4 = 2
// [x, x, 3, 4, 5, x] -> diff = 5 - 3 = 2
// [x, 2, 3, 4, x, x] -> diff = 4 - 2 = 2
// [1, 2, 3, x, x, x] -> diff = 3 - 1 = 2
// Ans: 2



#include<bits/stdc++.h>
using namespace std;

int minDifference(vector<int>& nums) 
{            
    int n=nums.size()-1;
    if (nums.size() <= 4) {
        return 0;
    } 
    sort(nums.begin(), nums.end());   
    int diff = nums[n] - nums[3];
    int res = diff;
    for (int i = 1; i <= 3; i++) 
    { 
        diff = nums[n-i] - nums[3-i];
        res = min(diff, res);
    }        
    return res;   
}