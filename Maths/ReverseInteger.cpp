#include<iostream>
#include <climits>
using namespace std;

//If reversing causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0

int reverse(int n) {
        
        int ans=0;
        int r=0;
        
        while(n)
        {
            r=n%10;
            if(ans<INT_MIN/10 || ans>INT_MAX/10)  //ans>INT_MAX/10 => ans*10>INT_MAX
                return 0;            
            ans=ans*10 + r;
            n/=10;            
        }        
        return ans;       
}

int main()
{
    int n;
    cin>>n;
    cout<<reverse(n);
}