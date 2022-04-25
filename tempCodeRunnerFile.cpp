#include<bits/stdc++.h>
using namespace std;

vector<string> a={"zero","one","two","three","four","five","six","seven","eight","nine"};

void SayDigits(int n) 
{
    if(n==0)
        return;

    int d=n%10;
    n=n/10;
    SayDigits(n);
    cout<<a[d]<<" ";
}

int main()
{
    int n;
    cin>>n;
    SayDigits(n);
}