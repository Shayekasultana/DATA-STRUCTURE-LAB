#include<iostream>
using namespace std;
class Queue{
    int front=-1;
    int rear=-1;
    int q[6];
public:
    bool isEmpty()
    {
        if(front==-1 && rear==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isFull()
    {
        if((rear+1)%6==front)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void enqueue(int element)
    {
        if(isEmpty()==true)
        {
            front=0;
            rear=0;
            q[rear]=element;
        }
        else if(isFull()==true)
        {
            cout<<"Queue is Full"<<endl;
        }
        else
        {
            rear=(rear+1)%6;
            q[rear]=element;
        }

    }
    void dequeue()
    {
        if(isEmpty()==true)
        {
            cout<<"Queue is Empty"<<endl;
        }
        else if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front=(front+1)%6;
        }
    }
    void show()
    {
        if(isEmpty()==true)
        {
            cout<<"Queue is Empty"<<endl;
        }
        else if(front<=rear)
        {
           for(int i=front;i<=rear;i++)
           {
               cout<<q[i]<<" ";
           }
           cout<<endl;
        }
        else
        {
            for(int i=front;i<6;i++)
            {
                cout<<q[i]<<" ";
            }
            for(int i=0;i<=rear;i++)
            {
                cout<<q[i]<<" ";
            }
            cout<<endl;
        }
    }








};
int main()
{
    Queue q;
    q.enqueue(3);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);
    q.show();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.show();
    q.enqueue(10);
    q.show();


}
