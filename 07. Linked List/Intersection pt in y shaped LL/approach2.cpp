// https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1
// optimal
// hashing
// O(m+n) time
// O(n) space

node* intersectionPresent(node* head1,node* head2) {
     unordered_set<node*> st;
    while(head1 != NULL) {
       st.insert(head1);
       head1 = head1->next;
    }
    while(head2 != NULL) {
        if(st.find(head2) != st.end()) return head2;
        head2 = head2->next;
    }
    return NULL;
}