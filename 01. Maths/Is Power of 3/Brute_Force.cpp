#include<bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/power-of-three/

bool isPowerOfthree(int n) 
{
    while(n > 1){
        if(n % 3){
            return false;
        }
        n /= 3;
    }
    return n == 1;
}

int main()
{
    int n;
    cin>>n;
    cout<<isPowerOfthree(n);
}