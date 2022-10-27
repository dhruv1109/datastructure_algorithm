// Pascal Triangle
// https://leetcode.com/problems/pascals-triangle-ii/

// https://leetcode.com/problems/pascals-triangle-ii/discuss/2749774/simple-maths-on-2-approaches

//  for ith row and jth column we have the number iCj
//  Now the question asks us to find the complete row.
//  If we calculate all the elements in this manner it would be quadratic in time. B
//  suppose we have nCr and we have to find nC(r+1), like 5C3 and 5C4
//  ==> 5C3 = 543 / 123
//  to get the next term we multiply numerator with its next term and denominator with its next term. As,
//  ==> 5C4 = 543 * 2 / 123 * 4

#include<bits/stdc++.h>
using namespace std;

vector<int> getRow(int r) 
{
    vector<int>v(r+1);
    long temp=1;
    v[0]=v[r]=1;
    for(int i=1,up=r,down=1;i<r;i++,up--,down++){
        temp = temp*up/down;
        v[i]=temp;
    }
    return v;
}