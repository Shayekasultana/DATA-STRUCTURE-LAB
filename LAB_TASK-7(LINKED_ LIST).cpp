
#include<iostream>
using namespace std;
class Node{

public:
    int data;
    Node *nextnode;
};


Node *head;
Node *createnode(int value)
{
    Node *newnode=new Node();
    newnode->data=value;
    newnode->nextnode=NULL;
    return newnode;
}

void insertatfront(int value)
{
    Node *newnode=createnode(value);
    newnode->nextnode=head;
    head=newnode;
}

void insertattail(int value)
{
    Node *newnode=createnode(value);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    Node *temp=head;
    while(temp->nextnode!=NULL)
    {
        temp=temp->nextnode;
    }
    temp->nextnode=newnode;
}
void insertatanyposition(int position,int value)
{
    Node *newnode=createnode(value);
  if (position==1)
  {
  newnode->nextnode= head;
  head = newnode;
  return;
  }

 Node *temp=head;
  for(int i=1;i<position-1;i++)
  {
      temp=temp->nextnode;
  }
  newnode->nextnode=temp->nextnode;
  temp->nextnode=newnode;


}

void removeback()
{
    Node *temp1=head;
    Node *temp2=temp1;
    int i=0;
    while(temp1->nextnode!=NULL)
    {
        if(i>0)
        {
            temp2=temp2->nextnode;
        }



       temp1=temp1->nextnode;
        i++;
    }
    temp2->nextnode=NULL;
    delete temp1;
}


void removeanyposition(int position)
{
    if(head==NULL)
    {
        cout<<"NO ELEMENT EXIST"<<endl;
        return;
    }
    Node *temp=head;
    if(position==1)
    {
        head=temp->nextnode;
        delete temp;
        return;
    }
    for(int i=1;i<position-1;i++)
    {
        temp=temp->nextnode;
    }
    Node *temp1=temp->nextnode;
    temp->nextnode=temp1->nextnode;
    delete temp1;
    return;
}


void  searchelement(int value)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        if(temp->data==value)
        {
            cout<<"Element Found "<<endl;
            return;
        }
        temp=temp->nextnode;
    }
    cout<<"Element not found "<<endl;
}
void display(Node *head)
{
   Node *temp=head;
   while(temp!=NULL)
   {
       cout<<temp->data<<"->";
       temp=temp->nextnode;
   }
}
int main()
{
    head=NULL;
    insertatfront(1);
    insertatfront(2);
    insertattail(3);
    insertattail(6);
    insertattail(9);
    removeback();
    removeanyposition(2);
    searchelement(6);



   display(head);
}
