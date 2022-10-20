#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int array[size];
    cout<<"Enter the elements of this array: ";
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }



   int element,temp=-1;



   cout<<"Enter the element for search: ";
    cin>>element;
    for(int i=0;i<size;i++)
    {
        if(array[i]==element)
        {
            temp=i;
            break;
        }
    }
    if(temp==-1)
    {
        cout<<"This element is not found";
    }
    else{
            cout<<"Element is found"<<endl;
        cout<<"Index of this element in this array: "<<temp<<endl;
    }
}
