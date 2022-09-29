#include<iostream>
using namespace std;
int main()
{
      int a;
    int b;
    cout<<"Enter size of the first array: ";
    cin>>a;
    int arr1[a];
    cout<<"Enter elements of this array: ";
    for(int i=0;i<a;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter size of the second array: ";
    cin>>b;



   int arr2[b];



   cout<<"Enter elements of this array: ";
    for(int i=0;i<b;i++)
    {
        cin>>arr2[i];
    }



    bool temp=false;



    cout<<"Uncommon elements: "<<endl;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(arr1[i]==arr2[j])
            {
                temp=true;
                break;
            }
            else if(arr1[i]!=arr2[j])
            {
                temp=false;



           }
        }



       if(temp==false)
        {
            cout<<arr1[i]<<" ";
        }



   }



      for(int i=0;i<b;i++)
        {
        for(int j=0;j<a;j++)
        {
            if(arr2[i]==arr1[j])
            {
                temp=true;
                break;
            }
            else if(arr2[i]!=arr1[j])
            {
                temp=false;



           }
        }
        if(temp==false)
        {
            cout<<arr2[i]<<" ";
        }



   }



    }
