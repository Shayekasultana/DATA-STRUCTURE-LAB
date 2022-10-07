#include<iostream>
using namespace std;
struct Employee{
int id;
int joinyear;
int salary;


};
int main()
{
Employee emp[10];
for(int i=0;i<10;i++)
{
cout<<"Employee number "<<i+1<<" ID: ";
cin>>emp[i].id;
cout<<"JOINING YEAR FOR EMPLOYEE number "<<i+1<<": ";
cin>>emp[i].joinyear;
cout<<"SALARY FOR EMPLOYEE number "<<i+1<<": ";
cin>>emp[i].salary;
cout<<endl;


}
cout<<"EMPLOYEE WHO JOINED BEFORE 2009"<<endl;


for(int i=0;i<10;i++)
{
if( emp[i].joinyear<2009)
{

cout<<"EMPLOYEE NUMBER "<<i+1<<" "<<"ID: "<<emp[i].id<<endl;
}
}


cout<<endl;
cout<<"EMPLOYEE SALARY MORE THAN 20000"<<endl;
for(int i=0;i<10;i++)
{
if( emp[i].salary>20000)
{

cout<<"EMPLOYEE NO "<<i+1<<" "<<"ID: "<<emp[i].id<<endl;
}
}



}
