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

  cout<<"Common elements are: "<<endl; 

    for(int i=0;i<a;i++)  

   {  
    
    for(int j=0;j<b;j++)      

   {          
      if(arr1[i]==arr2[j])          

   {                
    cout<<arr1[i]<<" ";            
    break;          
   }       


   }   


  }
}



