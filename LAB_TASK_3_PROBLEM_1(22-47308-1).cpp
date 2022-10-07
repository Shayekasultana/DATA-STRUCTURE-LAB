#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"ENTER THE ROW OF THE 2-D ARRAY: ";
    cin>>a;
    cout<<"ENTER THE COLUMN OF THE 2-D ARRAY: ";
    cin>>b;
    int arr[a][b];
    int transpose[b][a];
    for(int i=0;i<a;i++)
    {
    cout<<"ENTER THE ELEMENTS OF  "<<"ROW NO "<<i+1<<": ";
    for(int j=0;j<b;j++)
        {
        cin>>arr[i][j];
        transpose[j][i]=arr[i][j];
        }
       }
    cout<<"TRANSPOSE MATRIX OF THIS 2-D ARRAY: "<<endl;



   for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            cout<<transpose[i][j]<<" ";



       }
        cout<<endl;
    }



}
