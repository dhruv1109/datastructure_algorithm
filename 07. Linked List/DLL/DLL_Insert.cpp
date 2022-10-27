#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};

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

int getLength(Node* &head)
{
    int len=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}

void  InsertatHead(Node* &tail,Node* &head,int d) 
{
    if(head==NULL)
    {
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else
    {
        Node* temp=new Node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}

void  InsertatTail(Node* &tail,Node* &head,int d) 
{
    if(tail==NULL)
    {
        Node* temp=new Node(d);
        tail=temp;
        head=temp;
    }
    else
    {
        Node* temp=new Node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }    
}

void insertat(Node* tail,Node* head,int pos,int data)
{
    if(pos==1)
    {
        InsertatHead(tail,head,data);
        return;
    }

    Node* temp = head;
    int cnt=1;
    while(cnt<pos-1)
    {
        temp=temp->next;
        cnt++;
    } 
    if(temp->next==NULL)
    {
        InsertatTail(tail,head,data);
        return;
    }

    Node* nodetoinsert=new Node(data);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;    
    nodetoinsert->prev=temp;
    temp->next->prev=nodetoinsert;
}

int main()
{
    Node* N1=new Node(10);
    Node* head=N1;
    Node* tail=N1;
    print(head);
    cout<<"Length of ll is "<<getLength(head)<<endl;
    InsertatHead(tail,head,11);
    print(head);   
    InsertatHead(tail,head,12);
    print(head); 
    InsertatHead(tail,head,13);
    print(head);  
    cout<<"Length of ll is "<<getLength(head)<<endl;
    InsertatTail(tail,head,25);
    print(head);  
    InsertatTail(tail,head,50);
    print(head);  
    cout<<"Length of ll is "<<getLength(head)<<endl;
    insertat(tail,head,2,100);
    print(head);
    insertat(tail,head,4,27);
    print(head);
}