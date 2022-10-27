#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node( )
    {
        this->data=10;
        this->next=NULL;
    }
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

int main()
{
    Node* N1=new Node();
    cout<<N1->data<<" "<<N1->next<<endl;
    Node* N2=new Node(1);
    cout<<N2->data<<" "<<N2->next<<endl;
}
