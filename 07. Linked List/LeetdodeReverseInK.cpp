// Leetcode Reverse Nodes in k-Group
// https://leetcode.com/problems/reverse-nodes-in-k-group/

class Solution {
public:
    
    int getlength(ListNode* head)
    {
        int ans=0;
        while(head)
        {
            ans++;
            head=head->next;
        }
        return ans;
    }
    
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        int len=getlength(head);  
        
        if(head==NULL || len<k)
            return head;
        
        
        int count=0;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        ListNode* curr=head;
        
        while(curr!=NULL && count<k )
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;        
        }
        
        if(next!=NULL)
            head->next=reverseKGroup(next,k);
            
        return prev;
        
    }
};