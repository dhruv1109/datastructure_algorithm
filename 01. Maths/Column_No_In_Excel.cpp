#include<bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/excel-sheet-column-number/
//Given a string columnTitle that represents the column title as appear in an Excel sheet, return its corresponding column number


int main()
{
    string s;
    cin>>s;
    long long int number = 0;
    for (long long int i = 0; s[i] !=0; i++) {
        number = number*26 + s[i] - 'A' + 1;
    }
    cout<<number;
}
