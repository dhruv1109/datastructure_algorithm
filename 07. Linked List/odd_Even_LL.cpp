// Odd Even LL
// https://leetcode.com/problems/odd-even-linked-list/

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
        if(head==NULL || head->next==NULL || head->next->next==NULL)
            return head;
        
        ListNode* oddhead=new ListNode();
        ListNode* oddtail=oddhead;
        ListNode* evenhead=new ListNode();
        ListNode* eventail=evenhead;
        
        ListNode* temp=head;
        int count=1;
        while(temp)
        {
            if(count%2==1)
            {
                oddtail->next=temp;
                oddtail=temp;
            }
            else
            {
                eventail->next=temp;
                eventail=temp;
            }
            temp=temp->next;
            count++;
        }
        oddtail->next=evenhead->next;
        eventail->next=NULL;
        
        head=oddhead->next;
        
        delete oddhead;
        delete evenhead;
        
        return head;       
        
    }
};