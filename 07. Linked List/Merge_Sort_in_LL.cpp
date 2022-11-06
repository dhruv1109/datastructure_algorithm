node* findMid(node* head)
{
    node* slow=head,*fast=head->next;
    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
node* merge(node* left,node* right)
{
    if(left==NULL)
        return right;
    if(right==NULL)
        return left;
    
    node* ans=new node(-1);
    node* temp=ans;
    while(left && right)
    {
        if(left->data < right->data)
        {
            temp->next=left;
            left=left->next;
        }
        else
        {
            temp->next=right;
            right=right->next;
        }
        temp=temp->next;
    }
    if(left==NULL)
        temp->next=right;
    else
        temp->next=left;
    
    ans=ans->next;
    return ans;

}
node* mergeSort(node *head) {
    // Write your code here.
    if(head==NULL || head->next==NULL)
        return head;
    
    node* mid=findMid(head);
    node* left=head;
    node* right=mid->next;
    mid->next=NULL;
    
    left=mergeSort(left);
    right=mergeSort(right);
    
    return merge(left,right);
}