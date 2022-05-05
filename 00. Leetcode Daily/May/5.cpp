// Stack using 2 queue
// https://leetcode.com/problems/implement-stack-using-queues/

class MyStack {
public:
    queue<int> q1, q2;
    int curr_size;
    
    MyStack() 
    {
        curr_size = 0;
    }
    
    void push(int x) 
    {
        curr_size++;
        q2.push(x);
         while (!q1.empty()) 
         {
            q2.push(q1.front());
            q1.pop();
         }
         queue<int> q = q1;
         q1 = q2;
         q2 = q;
    }
    
    int pop() 
    {
        if (q1.empty())
            return -1;
        
        int d= q1.front();
        q1.pop();
        curr_size--;
        return d;
        
    }
    
    int top() 
    {
        if (q1.empty())
            return -1;
        
        return q1.front();
        
    }
    
    bool empty() 
    {
        if(curr_size==0)
            return true;
        
        return false;
    }
};