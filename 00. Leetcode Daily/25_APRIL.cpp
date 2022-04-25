// Peeking Iterator
// https://leetcode.com/problems/peeking-iterator/

#include<bits/stdc++.h>
using namespace std;

class Iterator {
		struct Data;
  		Data* data;
    public:
 		Iterator(const vector<int>& nums);
  		Iterator(const Iterator& iter);
 		int next();
 		bool hasNext() const;
 };

class PeekingIterator : public Iterator {
public:
    int *arr;
    int i=0;
    int n;
    vector<int> nums;
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
       
        n=nums.size();
        arr=new int[n];
        for(auto x:nums)
            arr[i++]=x;
        
        i=0;    
	}
	
	int peek() {
         return arr[i]; 
	}

	int next() {
        return arr[i++];   
	}
	
	bool hasNext() const {
        if(i>=n)
            return false;
        
        return true;
	}
};