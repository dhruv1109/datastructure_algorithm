// https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1
// optimal
// 2 pointer
// O(m+n) time
// O(1) space

int findIntersection(Node *headA, Node *headB)
{
    //Write your code here
        Node *ptr1 = headA;
        Node *ptr2 = headB;
        while(ptr1 != ptr2)
        {
            if(ptr1 == NULL)
                ptr1 = headB;
            else
                ptr1 = ptr1 -> next;
            
            if(ptr2 == NULL)
                ptr2 = headA;
            else
                ptr2 = ptr2 -> next;
        }
        return ptr1->data;
}