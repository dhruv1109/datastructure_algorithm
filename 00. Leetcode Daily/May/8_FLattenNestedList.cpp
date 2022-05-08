// Flatten Nested List Iterator
// https://leetcode.com/problems/flatten-nested-list-iterator/

class NestedIterator {
public:
    
    vector<int> v;
    int pos=0;
    
    NestedIterator(vector<NestedInteger> &nestedList) {
        solve(nestedList);
    }
    
    void solve(vector<NestedInteger> &nestedList)
    {
        for(auto x : nestedList)
        {
            if(x.isInteger())
                v.push_back(x.getInteger());
            else
                solve(x.getList());
        }
    }

    
    int next() {
         return v[pos++];
        
    }
    
    bool hasNext() {
        return pos < v.size();
    }
};
