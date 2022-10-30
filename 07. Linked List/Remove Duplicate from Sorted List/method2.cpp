#include<bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}

Node *removeDuplicates(Node *head)
{
 // your code goes here
        Node* cur = head;
        while(cur) 
        {
        	if(cur->next && cur->data == cur->next->data) {
        	    
        		Node* next_node= cur->next->next;
        		Node* nodeToDelete=cur->next;
        		delete(nodeToDelete);
        		cur->next=next_node;
        	}
        	else
        	    cur = cur->next;
        }
        return head;
}