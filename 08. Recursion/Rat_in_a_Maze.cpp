// Rat In a Maze Problem
// https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1#

#include<bits/stdc++.h>
using namespace std;

bool safe(vector<vector<int>> m,vector<vector<int>> visited,int x,int y,int n)
{
    if((x>=0 && x<n) &&(y>=0 && y<n) && m[x][y]==1 && visited[x][y]==0)
        return true;
    
    return false;
}
void solve(vector<vector<int>> &m, int n,vector<string>& ans,int x,int y,vector<vector<int>> visited,string path)
{
    if(x==n-1 && y==n-1)
    {
        ans.push_back(path);
        return;
    }
    visited[x][y]=1;
    
    //down
    int xnew=x+1;
    int ynew=y;
    if(safe(m,visited,xnew,ynew,n))
    {
        path.push_back('D');
        solve(m,n,ans,xnew,ynew,visited,path);
        path.pop_back();
    }
    //left 
    xnew=x;
    ynew=y-1;
    if(safe(m,visited,xnew,ynew,n))
    {
        path.push_back('L');
        solve(m,n,ans,xnew,ynew,visited,path);
        path.pop_back();
    }
    //right
    xnew=x;
    ynew=y+1;
    if(safe(m,visited,xnew,ynew,n))
    {
        path.push_back('R');
        solve(m,n,ans,xnew,ynew,visited,path);
        path.pop_back();
    }
    //up
    xnew=x-1;
    ynew=y;
    if(safe(m,visited,xnew,ynew,n))
    {
        path.push_back('U');
        solve(m,n,ans,xnew,ynew,visited,path);
        path.pop_back();
    }
    visited[x][y]=0;
}

vector<string> findPath(vector<vector<int>> &m, int n) {
    
    vector<string> ans;
    if(m[0][0]==0)
        return ans;
    
    int x=0,y=0;
    vector<vector<int>> visited=m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            visited[i][j]=0;
    }
    string path="";
    solve(m,n,ans,x,y,visited,path);
    sort(ans.begin(),ans.end());
    return ans;
}
