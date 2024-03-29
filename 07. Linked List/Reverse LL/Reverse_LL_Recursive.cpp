#include <bits/stdc++.h> 
using namespace std;

template <typename T>
class LinkedListNode
{
public:
    T data;
    LinkedListNode<T> *next;
    LinkedListNode(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void reverse(LinkedListNode<int>* &head,LinkedListNode<int> *curr,LinkedListNode<int> *prev)
{
    if(curr==NULL)
    {
        head=prev;
        return;
    }
    reverse(head,curr->next,curr);
    curr->next=prev;
}

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    LinkedListNode<int> *prev=NULL;
    LinkedListNode<int> *curr=head;
    reverse(head,curr,prev);
    return head;
        
}