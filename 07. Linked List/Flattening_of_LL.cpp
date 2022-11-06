 Node* merge(Node* left,Node* right)
{
    if(left==NULL)
        return right;
    if(right==NULL)
        return left;
    
    Node* ans=new Node(-1);
    Node* temp=ans;
    while(left && right)
    {
        if(left->data < right->data)
        {
            temp->bottom=left;
            left=left->bottom;
        }
        else
        {
            temp->bottom=right;
            right=right->bottom;
        }
        temp=temp->bottom;
    }
    if(left==NULL)
        temp->bottom=right;
    else
        temp->bottom=left;
    
    ans=ans->bottom;
    return ans;

}
Node *flatten(Node *root)
{
   // Your code here
   if (root == NULL || root->next == NULL)
        return root;

    Node* down=root;
    // Recur for list on right
    Node * right=flatten(root->next);

    // Now merge
    Node* ans= merge(down,right);

    // Return the ans
    // it will be in turn merged with its left
    return ans;
}
