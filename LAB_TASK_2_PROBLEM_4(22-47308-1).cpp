#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    cout<<"Enter elements of this array: ";
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    int input;
    int temp=0;
    cout<<"Enter the number: ";
    cin>>input;
    for(int i=0;i<10;i++)
    {
        if(arr[i]==input)
        {
            temp++;
        }
    }
    cout<<temp<<" Times"<<endl;
}
