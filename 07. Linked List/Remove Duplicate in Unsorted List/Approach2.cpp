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
    
    unordered_map<int,bool> visited;
    Node* curr=head;
    Node* prev=NULL;
    while(curr)
    {
        if(visited[curr->data]==true)
        {
            prev->next=curr->next;
            curr=curr->next;
        }
        else
        {
            visited[curr->data]=true;
            prev=curr;
            curr=curr->next;
        }
    }
    return head;    
}