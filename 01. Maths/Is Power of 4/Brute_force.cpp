#include<bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/power-of-four/submissions/

bool isPowerOfFour(int n) 
{
    while(n > 1){
        if(n % 4){
            return false;
        }
        n /= 4;
    }
    return n == 1;
}

int main()
{
    int n;
    cin>>n;
    cout<<isPowerOfFour(n);
}