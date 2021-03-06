//BSTIterator class that represents an iterator over the in-order traversal of BST
//https://leetcode.com/problems/binary-search-tree-iterator/

#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class BSTIterator {
public:
    vector<int> ans;
    int count=0;
    void inorder(TreeNode* root)
    {
        if(root==NULL)
            return;
        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
    }
    
    BSTIterator(TreeNode* root) {
        inorder(root);   
    }
    
    int next() {
         return ans[count++];
        
    }
    
    bool hasNext() {
        return ans.size()!=count;        
    }
};