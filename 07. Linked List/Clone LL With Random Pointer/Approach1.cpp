Node* copyRandomList(Node* head) 
{
    if(head==NULL)
        return head;
    
    map<Node* ,Node*> m;
    Node* ptr=head;
    while(ptr!=NULL)
    {
        Node * v = new Node(ptr->val);
        m[ptr]=v;
        ptr=ptr->next;
    }
    for(auto i:m)
    {
        i.second->next = m[i.first->next];
        i.second->random = m[i.first->random];
    }
    return m[head];
}