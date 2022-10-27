#include <bits/stdc++.h> 
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

Node *findMiddle(Node *head) {
    // Write your code here
    Node *temp=head;
    int count =0;
    while(temp)
    {
        count++;   
        temp=temp->next;
    }
    count =count/2;
    while(count--)
    {
        head=head->next;
    }

    return head;    
}

