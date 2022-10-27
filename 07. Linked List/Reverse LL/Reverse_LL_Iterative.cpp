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

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    LinkedListNode<int> *prev=NULL;
    LinkedListNode<int> *curr=head;
    while(curr != NULL)
    {
        LinkedListNode<int> *fwd=curr->next;
        curr->next=prev;
        prev=curr;
        curr=fwd;
    }
    return prev;    
}