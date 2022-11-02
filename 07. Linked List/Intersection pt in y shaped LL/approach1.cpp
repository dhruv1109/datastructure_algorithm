// https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1
// brute force
// chech by using 2 loops

int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
     while (head2) {
        Node* temp = head1;
        while (temp) {
            // if both Nodes are same
            if (temp == head2)
                return head2->data;
            temp = temp->next;
        }
        head2 = head2->next;
     }
     return -1;
}
