// Sort 0,1,2

void insertAtTail(Node *&tail,Node *curr)
{
    tail->next=curr;
    tail=curr;
}

Node* sortList(Node *head)
{
    // Write your code here.
    Node *zh=new Node(-1);
    Node *zt=zh;
    Node *oh=new Node(-1);
    Node *ot=oh;
    Node *th=new Node(-1);
    Node *tt=th;
    Node* temp=head;
    while(temp)
    {
        if(temp->data==0)
            insertAtTail(zt,temp);
        else if(temp->data==1)
            insertAtTail(ot,temp);
        else
            insertAtTail(tt,temp);

        temp=temp->next;
    }
    if(oh->next==NULL)
        zt->next=th->next;
    else
        zt->next=oh->next;
    
    ot->next=th->next;
    tt->next=NULL;
    
    head=zh->next;
    
    delete zh;
    delete oh;
    delete th;
    
    return head;
}
