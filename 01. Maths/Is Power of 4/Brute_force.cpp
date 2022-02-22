#include<bits/stdc++.h>
using namespace std;

//hhttps://leetcode.com/problems/power-of-four/

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