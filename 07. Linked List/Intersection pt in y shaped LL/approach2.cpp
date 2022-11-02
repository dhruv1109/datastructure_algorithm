// https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1
// optimal
// chech by using 2 loops

int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
         Node* ptr1=head1;
         Node* ptr2=head2;
         int c1=0,c2=0;
         while(ptr1!=NULL){
             c1++;
             ptr1=ptr1->next;
         }
         while(ptr2!=NULL){
             c2++;
             ptr2=ptr2->next;
         }
          ptr1=head1;
          ptr2=head2;
          
          //Traverse the bigger list from the first node to d node
          int diff=abs(c1-c2);

          if(c1>c2)
          {
              for(int i=0;i<diff;i++)
                  ptr1=ptr1->next;
          }
          else if(c2>c1)
          {
              for(int i=0;i<diff;i++)
                  ptr2=ptr2->next;
          }

          while(ptr1!=NULL && ptr2!=NULL )
          {
              if(ptr1==ptr2) 
                    return ptr1->data;
            ptr1=ptr1->next;
            ptr2=ptr2->next;

          }
          return -1;
}
