#include<bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/power-of-four/

//if Any Num is valid Power_Of_4 then It should Be valid Power_Of_2 as well
//1. No of Set Bit Always Be Only ONE 
//2. That SetBit Possition Should Be always In odd Place [ starting from Left ] 

// 0xaaaaaaaa represents binary with even positions set as 1.
// 0x55555555 represents binary with odd positions set as 1

 bool isPowerOfFour(int n) 
 {
    if(n <= 0){
        return false;
    }
    if(n == 1){
        return true;
    }
    // first check only one bit is set:
    if ((num & (num -1)) != 0) return false;
    // next check if it's a bit in pos 1, 3, 5 ... 31
    if (num & 0x55555555) return true;
    return false;
}

int main()
{
    int n;
    cin>>n;
    cout<<isPowerOfFour(n);
}