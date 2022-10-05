#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    int b[n];



   cout<<"Enter elements of this array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(b[i]!=-1){
            int count=1;
            for(int j=i+1;j<n;j++){
                if(a[i]==a[j])
                {
                    count++;
                    b[j]=-1;
                }
            }
            cout<<a[i]<<" Occurs "<<count<<" times "<<endl;
        }



   }





}

