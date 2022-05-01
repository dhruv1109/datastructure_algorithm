#include<bits/stdc++.h>
using namespace std;

int c=0;
int toh(int N, int from, int to, int aux)
{
    if(N==0)
        return c;
    toh(N-1,from,aux,to);
    cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
    c++;
    toh(N-1,aux,to,from);
}
int main()
{
    int n;
    cin>>n;
    cout<<toh(n,1,3,2);
}