//DESIGN HASHSET 
//https://leetcode.com/problems/design-hashset/

// IMP POINT -->  std::vector<bool> does not use the standard allocator
// resize() is defined as  void resize(size_type sz, bool c = false);
// SO WE HAVE USED RESIZE 

class MyHashSet {
public:
    vector<bool> ans;
    
    MyHashSet() {
        ans.resize(1e6+1, false);
    }
    
    void add(int key) {
        ans[key]=true;
    }
    
    void remove(int key) {
        ans[key]=false;
    }
    
    bool contains(int key) {
        return ans[key];
    }
};
