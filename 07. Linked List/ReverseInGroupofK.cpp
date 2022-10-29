#include<bits/stdc++.h>
using namespace std;

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

Node* kReverse(Node* head, int k) 
{
        if(head==NULL)
                return head;
        
        
        int count=0;
        Node* prev=NULL;
        Node* next=NULL;
        Node* curr=head;
        
        while(curr!=NULL && count<k )
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;        
        }
        
        if(next!=NULL)
            head->next=kReverse(next,k);
            
        return prev;
}
