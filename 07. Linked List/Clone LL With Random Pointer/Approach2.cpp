class Solution {
public:
    {
        Node* temp=new Node(d);
        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else
        {
            tail->next=temp;
            tail=temp;
        }
    }
    
    Node* copyRandomList(Node* head) {
        if(head==NULL)
            return head;
        
        Node *clonehead=NULL;
        Node* clonetail=NULL;
        
        Node * original=head;
        while(original)
        {
            insertAtTail(clonehead,clonetail,original->val);
            original=original->next;
        }
        original=head;
        Node* clone=clonehead;
        unordered_map<Node*,Node*> m;
        while(original)
        {
            m[original]=clone;
            original=original->next;
            clone=clone->next;
        }
        original=head;
        clone=clonehead;
        while(original)
        {
            clone->random=m[original->random];
            original=original->next;
            clone=clone->next;
        }
        return clonehead;
    }
};