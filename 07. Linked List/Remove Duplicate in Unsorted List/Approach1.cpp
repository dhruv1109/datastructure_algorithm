#include <bits/stdc++.h> 

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *removeDuplicates(Node *head)
{
    // Write your code here
    if(head==NULL)
        return NULL;
    
    Node* next_next = NULL;    
    Node* temp = head;
    while(temp != NULL)
    {
        Node* curr = temp;
        while(curr->next != NULL)
        {
            if(temp->data == curr->next->data)
            {
                next_next = curr->next->next;
                delete curr->next;
                curr->next = next_next;
            }
            else
            {
                curr = curr->next;
            }
        }
        temp = temp->next;
    }
    return head;    
}