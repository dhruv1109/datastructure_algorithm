class Solution {
public:
    ListNode* getMid(ListNode* head)
    {
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;            
        }
        return slow;
    }
    ListNode* reverse(ListNode* head)
    {
        ListNode* curr=head;
        ListNode* prev=NULL;
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
    bool isPalindrome(ListNode* head) {
        
        if(head->next==NULL)
            return true;
        
        ListNode* middle=getMid(head);
        middle->next=reverse(middle->next);
        ListNode* temp=middle->next;
        while(temp)
        {
            if(temp->val!=head->val)
                return false;
            
            temp=temp->next;
            head=head->next;
        }
         middle->next=reverse(middle->next);
         return true;
    }
};