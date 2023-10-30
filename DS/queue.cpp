#include<bits/stdc++.h>
using namespace std;

class Queue
{
    public:
    int front;
    int rear;
    int arr[5];

    Queue()
    {
        front=-1;
        rear=-1;
        for(int i=0;i<5;i++)
        {
            arr[i]=0;
        }
    }

    bool isEmpty()
    {
        if (front==-1 && rear==-1)
        return true;
        else
       return false;
    }

    bool isFull()
    {
        if(rear==4)
        return true;
        else
        return false;
    }

    void enqueue(int val)
    {
        if(isFull())
        {
            cout<<"cannot add elements"<<endl;
            return;
        }
        else if(isEmpty())
        {
            rear=front=0;
            arr[rear]=val;
        }
        else
        {
            rear++;
            arr[rear]=val;
        }
    }

    int dequeue()
    {
        int x;
        if(isEmpty())
        {
            cout<<"cannot remove elements"<<endl;
            return 0;
        } 
        else if(rear==front)
        {
            x=arr[front];
            rear=front=-1;
            arr[front]=0;
            return x;
        }
        else
        {
            x=arr[front];
            arr[front]=0;
            front++;
            return x;
        }
    }

    void display()
    {
        for(int i=0;i<5;i++)
        {
            cout<<arr[i]<<endl;
        }
    }
};

int main()
{
    Queue q;
    q.dequeue();
    q.display();
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.display();
    return 0;
}