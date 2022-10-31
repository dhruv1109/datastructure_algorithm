// Sort 0,1,2

Node* sortList(Node *head)
{
    // Write your code here.
        int z=0,o=0;
        Node* temp=head;
        while(temp)
        {
            if(temp->data==0)
                z++;
            else if(temp->data==1)
                o++;
                
            temp=temp->next;
        }
        temp=head;
        while(temp)
        {
            if(z!=0)
            {
                temp->data=0;
                z--;
            }
            else if(o!=0)
            {
                temp->data=1;
                o--;   
            }
            else
                temp->data=2;
                
            temp=temp->next;
        }
        return head;
}