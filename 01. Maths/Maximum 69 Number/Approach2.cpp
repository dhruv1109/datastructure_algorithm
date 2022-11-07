//https://leetcode.com/problems/maximum-69-number/

// O(N) time
// O(1) space

// we can check every digit of num from low to high and record the highest digit 6. 
// Assume that it is the k-th digit (0 based)
// 'converting' this digit from 6 to 9 equals adding 3*10^k to the original integer num! 
// eg in 9669 we find the highest 6 is the 2nd digit and increment 9669 by 300(3*10^2) makes it 9969 

class Solution {
public:
    int maximum69Number (int num) {
        int Copy = num;
        int indexSix = -1;
        int currDigit = 0;
        
        // Check every digit of 'numCopy' from low to high.
        // If the current digit is '6', record it as the highest digit of 6.
        while(Copy > 0) 
        {            
            if(Copy % 10 == 6) 
                indexSix = currDigit;

            // Move on to the next digit.
            Copy /= 10;
            currDigit++;
        }
        
        // If we don't find any digit of '6', return the original number,
        // otherwise, increment 'num' by the difference made by the first '6'.
        if(indexSix == -1)
                return num;
        
        return num+3*pow(10,indexSix);
    }
};