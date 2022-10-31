// Sort List
// https://leetcode.com/problems/sort-list/

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head==NULL)
                return NULL;
        ListNode* p = head;
        vector<int> a;
        while(p)
        {
            a.push_back(p->val);
            p=p->next;
        }
        sort(a.begin(),a.end());
        p=head;
        int i=0;
        while(p)
        {
            p->val=a[i];
            p=p->next;
            i++;
        }
        return head;    
    }
};