//Kth Smallest Element in a BST
//https://leetcode.com/problems/kth-smallest-element-in-a-bst/

// INORDER TRAVERSAL [LEFT->ROOT->RIGHT]
// INORDER TRAVERSAL OF BST GIVES ARRAY IN INCREASING ORDER
// FOR KTH LARGEST ELEMENT, WE WILL DO RETURN ANS[N-K] where N is size of ans

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

 class Solution {
public:
    vector<int> ans;
    void in(TreeNode* root)
    {
         if (root == NULL)
         return;
         in(root->left);
         ans.push_back(root->val);
         in(root->right);       
    }
    int kthSmallest(TreeNode* root, int k) {
        
        in(root);
        return ans[k-1];        
    }
};