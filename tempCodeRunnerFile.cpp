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
    ~Node()
    {
        int val=this->data;
        if(this->next !=NULL)
        {
            delete next;
            this->next =NULL;
        }
        cout<<"Memory is free for node with data "<<val<<endl;
    }
};

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
}

void  InsertatHead(Node* &head,int d) 
{
    //New node created  
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void  InsertatTail(Node* &tail,int d) 
{
    //New node created  
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
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

void nodetodelete(int pos,Node* &head)
{
    if(pos==1)
    {
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    Node* curr=head;
    Node* prev=NULL;
    int cnt=1;
    while(cnt<pos)
    {
        prev-curr;
        curr=curr->next;
        cnt++;
    }
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
}

int main()
{
    //creating a new node
    Node* N1=new Node(10);
    //head points to n1
    Node* head=N1;
    Node* tail=N1;
    print(head);
    InsertatTail(tail,11);
    print(head);
    InsertatTail(tail,12);
    print(head);
    InsertatTail(tail,13);
    print(head);
    insertat(tail,head,3,22);
    print(head);
    nodetodelete(2,head);
    print(head);
}