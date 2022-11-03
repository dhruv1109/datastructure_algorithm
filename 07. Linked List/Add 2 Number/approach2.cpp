// Add 2 No II
// https://leetcode.com/problems/add-two-numbers-ii/

class Solution {
public:
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next=NULL;
        while(curr)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;      
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        l1=reverse(l1);
        l2=reverse(l2);
        
        int carry=0;
        ListNode *ptr = new ListNode();     
        ListNode *temp = ptr;
        
        while(l1 || l2 || carry)
        {
            int sum=0;
            if(l1)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2)
            {
                sum+=l2->val;
                l2=l2->next;
            }
            sum+=carry;
            carry=sum/10;
            temp->next=new ListNode(sum%10);    
            temp=temp->next;
        }
        return reverse(ptr->next);
    }
};