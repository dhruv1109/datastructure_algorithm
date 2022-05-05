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

void  InsertatHead(Node* &head,int d) 
{
    //New node created  
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void  InsertatTail(Node* &tail,int d) 
{
    //New node created  
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertat(Node* tail,Node* head,int pos,int data)
{
    if(pos==1)
    {
        InsertatHead(head,data);
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
        InsertatTail(tail,data);
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
    InsertatHead(head,11);
    print(head);   
    InsertatHead(head,12);
    print(head); 
    InsertatHead(head,13);
    print(head);  
    cout<<"Length of ll is "<<getLength(head)<<endl;
    InsertatTail(tail,25);
    print(head);  
    InsertatTail(tail,50);
    print(head);  
    cout<<"Length of ll is "<<getLength(head)<<endl;
    insertat(tail,head,2,100);
    print(head);
    insertat(tail,head,4,27);
    print(head);
}