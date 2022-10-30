// starting node of loop
// https://leetcode.com/problems/linked-list-cycle-ii/

#include <bits/stdc++.h> 
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        if(head==NULL)
            return NULL;

        ListNode *slow  = head;
        ListNode *fast  = head;
        ListNode *entry = head;

        while (fast->next && fast->next->next) 
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) 
            {                      
                while(slow != entry) {               
                    slow  = slow->next;
                    entry = entry->next;
                }
                return entry;
            }
        }
        return NULL;             
    }
};