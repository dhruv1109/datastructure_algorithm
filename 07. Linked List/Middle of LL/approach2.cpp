// Middle in LL
// https://leetcode.com/problems/middle-of-the-linked-list/

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int N = 0;
        for(auto iter = head; iter; iter = iter -> next)
            N++;   
        for(int i = 0; i < N/2; i++)                             
            head = head -> next;
        return head;
        
    }
};