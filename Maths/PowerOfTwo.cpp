#include<iostream>
using namespace std;

bool isPowerOfTwo(int n) 
{
        if(n<=0)
        {
            return false;
        }
        
        return !(n&(n-1));
}

int main()
{
    int n;
    cin>>n;

    cout<<isPowerOfTwo(n);

    return 0;
}
