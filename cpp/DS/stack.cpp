#include<bits/stdc++.h>
using namespace std;
class Stack
{
    public:
    int top;
    int a[5];

    public:
    Stack()
    {
        top=-1;
        for (int i=0;i<5;i++)
        {
            a[i]=0;
        }
    }

    void isEmpty()
    {
        if(top==-1)
        cout<<"stack is empty"<<endl;
        else
        cout<<"stack is not empty"<<endl;
    }

     void isFull()
    {
        if(top==4)
        cout<<"stack is full"<<endl;
        else
        cout<<"stack is not full"<<endl;
    }

    void push(int val)
    {
        top++;
        a[top]=val;
    }

    int pop()
    {
        int popval=a[top];
        a[top]=0;
        top--;
        return popval;
    }

    void display()
    {
        for(int i=4;i>=0;i--)
        {
            cout<<a[i]<<endl;
        }
    }

};

    int main()
    {
        Stack s;
        s.display();
        s.isFull();
        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);
        s.push(50);
        s.isEmpty();
        s.display();
        return 0;
    }
