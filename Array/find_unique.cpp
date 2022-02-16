#include<iostream>
using namespace std;

//https://www.codingninjas.com/codestudio/problems/find-unique_625159?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1

int findUnique(int *arr, int size)
{
    //a xor a = 0
    //a xor 1 = a
    int ans=0;
    for(int i=0;i<size;i++)
        ans=ans^arr[i];
    
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int arr[2*n + 1];
    for(int i=0;i<=2*n;i++)
    cin>>arr[i];

    cout<<findUnique(arr,2*n +1);
}