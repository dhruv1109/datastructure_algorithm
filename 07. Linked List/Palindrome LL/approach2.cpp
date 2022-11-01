class Solution{
  public:    
    bool check(vector<int> v)
    {
        int s=0;
        int e=v.size()-1;
        while(s<e)
        {
            if(v[s]!=v[e])
                return false;
                
            s++;
            e--;
        }
        return true;
    }
    
    bool isPalindrome(Node *head)
    {
        //Your code here
        Node* slow = head;
 
        vector<int> v;

        // Push all elements of the list to the stack
        while (slow != NULL) {
            v.push_back(slow->data);
            slow = slow->next;
        }
        
        return check(v);
    }
};