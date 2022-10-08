#include<iostream>
using namespace std;
void func(int a,int b)
{
     int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x ;i++)
    {
        cin>>arr[i];
    }



   cout<<endl;
    for(int j=0;j<x;j++)
    {

       for(int i=a;i<=b;i++)
        {
        if(i%2!=0&& arr[j]==i)
        cout<<i<<" ";
        }
    }
}
int main()
{
   int a,n;
    cin>>a>>n;


    func(a,n);
}


