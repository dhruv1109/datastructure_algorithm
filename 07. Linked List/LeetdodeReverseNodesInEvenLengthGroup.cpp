// Reverse Nodes in Even Length Groups
// https://leetcode.com/problems/reverse-nodes-in-even-length-groups/


// I traverse the list in groups where the sizes are in the increasing order of natural numbers.
// Whenever a group with even length is encountered, that group is reversed using the reverse function 
// and I proceed with processing the next group.
// pointers which track the current group’s head, tail and the next group’s head.


class Solution {
public:

    // Function to reverse a linked list
    ListNode* reverseList(ListNode* head) {
        if(!head)
            return head;
        
        ListNode* prev = NULL;
        while(head) {
            ListNode* temp = head -> next;
            head -> next = prev;
            prev = head;
            head = temp;
        }
        
        return prev;
    }
    
    ListNode* reverseEvenLengthGroups(ListNode* head) {
                
        // Creating a dummy node to avoid adding checks for the first node
        ListNode* dummy = new ListNode();
        dummy -> next = head;
        
        ListNode* prev = dummy;
        
        // Loop to determine the lengths of groups
        for(int len = 1; len < 1e5 && head; len++) 
        {
            ListNode* tail = head;
            ListNode* nextHead;
            
            int j = 1;
            while(j < len && tail && tail -> next) {
                tail = tail -> next;
                j++;
            }
            
            // Head of the next group
            nextHead = tail -> next;
            
            if((j % 2) == 0) 
            {
                tail -> next = NULL;
                prev -> next = reverseList(head);
                prev = head;
                head -> next = nextHead;
                head = nextHead;
            } 
            else 
            {
                prev = tail;
                head = nextHead;
            }
        }
        
        // Returning the head
        return dummy -> next;    
    }
};