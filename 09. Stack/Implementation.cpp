#include<bits/stdc++.h>
using namespace std;

class Stack
{
    public:
        int *arr;
        int top;
        int size;

    Stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int element)
    {
        if(size-top >1)
        {
            top++;
            arr[top]=element;
        }
        else
            cout<<"STACK OVERFLOW"<<endl;
     }
    void pop()
    {
        if(top>=0)
            top--;
        else
            cout<<"STACK UNDERFLOW"<<endl;
    }
    int peek()
    {
        if(top>=0)
            return arr[top];
        else
        {
            cout<<"STACK EMPTY"<<endl;
            return -1;
        }            
    }
    bool isEmpty()
    {
        if(top==-1)
            return true;
        else
            return false;
    }
};

int main()
{
    Stack st(5);
    st.push(22);
    st.push(43);
    st.push(44);

    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
}