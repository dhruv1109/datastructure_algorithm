#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
vector<int> commDiv(int a, int b)
{
    vector<int> ans;
    int n = gcd(a, b);
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            ans.push_back(i);
            ans.push_back(n/i);
        }
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a==1 && b==1)
        {
            cout<<1<<endl;
            continue;
        }
        int m1=min(a,b);
        int m2=max(a,b);
        if(m1*m1==m2)
        {
            cout<<1<<endl;
            continue;
        }


        vector<int> ans;
        ans=commDiv(a, b); 
        int check=1;
        for(auto i:ans)
        {
            check*=i;
        }
        a=a/check;
        b=b/check;
        if(a*b==check)
        cout<<1<<endl;
        else 
        cout<<-1<<endl;
    }
    return 0;
}

