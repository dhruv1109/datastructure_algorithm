// Detect & Remove Loop
// https://www.codingninjas.com/codestudio/problems/interview-shuriken-42-detect-and-remove-loop_241049?leftPanelTab=0

#include <bits/stdc++.h> 
using namespace std;

class Node 
{
    public :

    int data;
    Node *next;

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

Node *removeLoop(Node *head)
{
    // Write your code here.
    if(head==NULL || head->next==NULL)
        return head;
    
    Node *slow=head,*fast=head;
    bool loop=0;
    
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            loop=1;
            break;
        }
    }
    if(!loop)
        return head;
    
    slow=head;
    while(slow!=fast)
    {
        slow=slow->next;
        fast=fast->next;
    }
    Node * StartOfLoop=slow;
    Node* temp=slow;
    while(temp->next!=StartOfLoop)
    {
        temp=temp->next;
    }
    temp->next=NULL;
    
    return head;
}
