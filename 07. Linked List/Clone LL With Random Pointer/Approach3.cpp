class Solution
{
    public:
    void insertAtTail(Node *&head,Node *&tail,int d)
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
    Node *copyList(Node *head)
    {
        
        if(head==NULL)
            return head;
        
        // step 1 create a clone list
        Node *clonehead=NULL;
        Node* clonetail=NULL;
        
        Node * original=head;
        while(original)
        {
            insertAtTail(clonehead,clonetail,original->data);
            original=original->next;
        }
        
        // step 2 clone node between original list
        original=head;
        Node* clone=clonehead;
        while(original && clone)
        {
            Node* next=original->next;
            original->next=clone;
            original=next;
            next=clone->next;
            clone->next=original;
            clone=next;
        }
        
        // step 3 copy random 
        Node* temp=head;
        while(temp)
        {
            if(temp->next)
                temp->next->arb=temp->arb?temp->arb->next:temp->arb;
                
            temp=temp->next->next;
        }
        
        // step 4 reverse step 2
        original=head;
        clone=clonehead;
        while(original && clone)
        {
            original->next=clone->next;
            original=original->next;
            if(original!=NULL)
                clone->next=original->next;
            
            clone=clone->next;
        }
        return clonehead;
    }
};