#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter size of the first array: ";
   cin>>a;
    int arr1[a];
    cout<<"Enter elements of this array: ";
    for(int i=0;i<a;i++)
    {
        cin>>arr1[i];
   }
    cout<<"Enter the size of the second array: ";
    cin>>b;
    int arr2[b];
    cout<<"Enter elements of this array: ";
    for(int i=0;i<b;i++)
    {
        cin>>arr2[i];
    }

   int arrmerge[a+b];


    for(int i=0;i<a;i++)
    {
        arrmerge[i]=arr1[a-(i+1)];

   }
    int temp=b-1;
    for(int i=a;i<a+b;i++)
    {
        arrmerge[i]=arr2[temp];
        temp--;
    }
    cout<<"Reverse and merge of this two array: "<<endl;
    for(int i=0;i<a+b;i++)
    {
        cout<<arrmerge[i]<<" ";
    }



}
