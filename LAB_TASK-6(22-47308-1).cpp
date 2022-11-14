#include<iostream>
using namespace std;
class Queue{

int q[8],front=-1,back=-1;
public:
    bool isEmpty(){
    if(front==-1 && back==-1)
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
        if(back==7)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void enqueue(int value)
    {
        if(isFull()==true)
        {
            cout<<"can not push this value"<<endl;
        }
        else if(isEmpty()==true)
        {
            front=0;
            back=0;
            q[back]=value;
        }
        else{
            back++;
            q[back]=value;
        }
    }

    void dequeue()
    {
        if(isEmpty()==true)
        {
            cout<<"can not pop this value"<<endl;
        }
        else if(front==back)
        {
            front=-1;
            back=-1;

        }
        else{
            front++;
        }
    }
    void showQueue()
    {
        if(isEmpty()==true)
        {
            cout<<"can not show"<<endl;
        }
        else
        {
            for(int i=front;i<=back;i++)
            {
                cout<<q[i]<<endl;
            }
        }
    }


};
int main()
{
    Queue queue1;
    queue1.isEmpty();
    queue1.enqueue(10);
    queue1.enqueue(11);
    queue1.enqueue(12);
    queue1.enqueue(13);
    queue1.enqueue(14);
    queue1.enqueue(15);
    queue1.enqueue(16);
    queue1.enqueue(17);
    queue1.showQueue();
    queue1.enqueue(18);

    queue1.dequeue();
    queue1.dequeue();
    queue1.showQueue();

}
