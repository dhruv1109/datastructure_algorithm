class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        Node* slow = head;
 
        stack<int> s;

        // Push all elements of the list to the stack
        while (slow != NULL) {
            s.push(slow->data);
            slow = slow->next;
        }
 
        // Iterate in the list again and
        // check by popping from the stack
        while (head != NULL) {

            // Get the top most element
            int i = s.top();

            // Pop the element
            s.pop();

            // Check if data is not
            // same as popped element
            if (head->data != i) {
                return false;
            }

            // Move ahead
            head = head->next;
        }

        return true;
    }
};