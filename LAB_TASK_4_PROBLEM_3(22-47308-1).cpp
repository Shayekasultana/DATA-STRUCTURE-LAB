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
    for(int i=0;i<size-1;i++)
    {
        int min=i;
       for(int j=i+1;j<size;j++)
       {

       if(array[min]>array[j])
        {

           min=j;
        }

   }
        int temp=array[i];
            array[i]=array[min];
            array[min]=temp;
    }
    cout<<"Sorted array is: "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    int start,end,mid,element;
    cout<<"Enter the element for search: ";
    cin>>element;
    start=0;
    end=size-1;
    while(start<=end)
    {
        mid=(start+end)/2 ;
        if(array[mid]==element)
        {
            cout<<"Element is found";
            cout<<endl;
            cout<<"Index for this element in this array: "<<mid<<endl;
            break;
        }
        else if(array[mid]>element)
        {
            end=mid-1;
            continue;
        }
        else if(array[mid]<element)
        {
            start=mid+1;
            continue;
        }
    }
    if(start>end)
    {
        cout<<"Element is not found";
    }
}
