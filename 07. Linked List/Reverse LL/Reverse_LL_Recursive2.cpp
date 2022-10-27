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

LinkedListNode<int>* reverse(LinkedListNode<int>* &head)
{
    if(head==NULL || head->next==NULL)
        return head;
    
    LinkedListNode<int>*newhead=reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    
    return newhead;
}

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    LinkedListNode<int> *temp=reverse(head);
    return temp;     
}