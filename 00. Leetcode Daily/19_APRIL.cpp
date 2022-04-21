// Recover Binary Search Tree
//https://leetcode.com/problems/recover-binary-search-tree/

//swap random two elments -> 1 2 6 4 5 3 7 (swap 3 and 6)
//find the first number have index i satisfy arr[i - 1] > arr[i] => first mistake have index i - 1 
// continue but don't change first mistake, if arr[i - 1] > arr[i] and u had found the first mistake => second mistake is i;

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
    
    TreeNode* first, *second, *pre;
    void inorder(TreeNode* root) 
    {
		if(root == NULL) 
			return;

		inorder(root->left);

		if(first == NULL && root->val < pre->val)
			first = pre;
		if(first != NULL && root->val < pre->val)
			second = root;
		pre = root;

		inorder(root->right);
	}
    
	void recoverTree(TreeNode* root) 
    {
		pre = new TreeNode(INT_MIN);
		inorder(root);
		swap(first->val, second->val);
	}
};