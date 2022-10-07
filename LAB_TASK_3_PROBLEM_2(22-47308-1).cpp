#include<iostream>
#include<string.h>
using namespace std;

int main()
{
   string a;
   cout<<"Enter the string you want to change: ";

   getline(cin,a);
    int value;
    cout<<"Enter the value: ";
     cin>>value;
     int i=2;

   for(;i<a.length();i=i+3){
            if(a[i]!='\0'){

               a[i]=char(int(a[i])+value);

              }

   }



   cout<<"New converted string: ";
    for(int i=0;i<a.length();i++)
    {
        cout<<a[i];
    }






}
