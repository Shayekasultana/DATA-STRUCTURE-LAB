#include<iostream>
using namespace std;
class Node{
    public:
int data;
Node *prevnode;
Node *nextnode;


};
Node *head;
Node* createnode(int val)
{
    Node *newnode=new Node();
    newnode->data=val;
    newnode->nextnode=NULL;
    newnode->prevnode=NULL;
    return newnode;
}

void insertatfront(int val)
{
    Node *newnode=createnode(val);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    head->prevnode=newnode;
    newnode->nextnode=head;
    head=newnode;

}

void insertattail(int val)
{
    Node *newnode=createnode(val);
    Node *temp=head;
    if(head==NULL)
    {
        head=newnode;
       return;
    }

    while(temp->nextnode!=NULL)
    {
        temp=temp->nextnode;
    }
    temp->nextnode=newnode;
    newnode->prevnode=temp;
}

void insertatanyposition(int position,int val)
{
    Node *newnode=createnode(val);
    Node *temp=head;
    if(position==1)
    {

        newnode->nextnode=head;
        head=newnode;
        return;

    }

    for(int i=1;i<position-1;i++)
    {
        temp=temp->nextnode;
    }
    newnode->prevnode=temp;
    newnode->nextnode=temp->nextnode;
    temp->nextnode=newnode;

}

void printtraverse()
{
    Node *temp=head;
    if(head==NULL)
    {
        cout<<"LINKED LIST IS EMPTY"<<endl;
        return;
    }

    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->nextnode;
    }
}
int main()
{
    head=NULL;

insertatfront(10);
insertatfront(11);
insertattail(20);
insertattail(40);
insertatanyposition(3,30);

printtraverse();
}
