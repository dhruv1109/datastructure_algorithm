bool isCircular(Node* head){
    // Write your code here.
    if(head==NULL)
        return true;
    if(head!=NULL && head->next==NULL)
        return false;
    
     Node * slow = head, * fast = head;
     while (fast != NULL && fast -> next != NULL) 
     {
        slow = slow -> next;
        fast = fast -> next -> next;
        if (slow == fast) {
            break;
        }
    }
    
    if (slow == fast && slow == head) {
        return true;
    }

    return false;
}
