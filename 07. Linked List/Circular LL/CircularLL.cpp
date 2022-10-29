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

void insert(Node* &tail,int element,int d)
{
    //empty list
    if(tail==NULL)
    {
        Node* newNode=new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }
    //non-empty list
    //assuming that element is present in the list
    else
    {
        Node* curr=tail;
        while(curr->data != element)
            curr=curr->next;

        //curr is representing element waala node
         Node* temp=new Node(d);
         temp->next=curr->next;
         curr->next=temp;

    }
}

void print(Node* &tail)
{
    if(tail==NULL)
    {
        cout<<"List is Empty"<<endl;
        return;
    }

    Node* temp=tail;
    do{
        cout<<tail->data<<"->";
        tail=tail->next;
    }while(tail !=  temp); 
    
    cout<<endl;
}

void nodetodelete(Node* &tail,int value)
{
    //empty list
    if(tail==NULL)
    {
        cout<<"List is Empty , nothing can be deleted"<<endl;
    }
    //non-empty list
    //assuming that element is present in the list
    else
    {
        Node* prev=tail;
        Node* curr=prev->next;

        // 1 node in LL
        if(prev==curr)
        {
            tail=NULL;
            return;
        }
        // 2 or more nodes in LL
        else
        {
            while(curr->data != value)
            {
                prev=curr;
                curr=curr->next;
            }
            
            prev->next=curr->next;
            if(tail==curr)
            {
                tail=prev;
            }        
            curr->next=NULL;
            delete curr;

        }
    }
}

int main()
{
    Node* tail=NULL;
    nodetodelete(tail,1);
    insert(tail,5,3);
    print(tail);
    insert(tail,3,5);
    print(tail);
    insert(tail,5,7);
    print(tail);
    insert(tail,7,9);
    print(tail);
    insert(tail,5,6);
    print(tail);
    insert(tail,9,10);
    print(tail);
    insert(tail,3,4);
    print(tail);
    nodetodelete(tail,3);
    print(tail);
}
