#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of this array: ";
    int size;
    cin>>size;
    int array[size];
    cout<<"Enter the elements of this array: ";
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }



   int iteration=0;
    while(iteration<size-1)
    {
        for(int i=0;i<size-iteration;i++)
        {
            if(array[i]>array[i+1])
            {
                int temp;
                temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;



           }
        }
        iteration++;
    }
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }



}
