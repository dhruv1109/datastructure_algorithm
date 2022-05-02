#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

void  InsertatHead(Node* &head,int d) 
{
    //New node created  
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    //creating a new node
    Node* N1=new Node(10);
    //head points to n1
    Node* head=N1;
    print(head);
    InsertatHead(head,11);
    print(head);
    InsertatHead(head,12);
    print(head);
}