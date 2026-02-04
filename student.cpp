#include"student.h"
#include<iostream>
using namespace std;
//initialise
Student::Student()
{
  //to_avoid_garbage_value
rollnumber=0;
  name="";
  branch="";
  year=0;
}
//take_input
void Student::inputDetails()
{
  cout<<"enter roll number: ";
cin>>rollnumber;
cout<<"enter name:";
cin>>name;
cout<<"enter branch:";
cin>>branch;
cout<<"enter year:";
cin>>year;
}
//display_output
void Student::displayDetails()
{
  cout<<"\nstudent details:\n";
cout<<"roll number = "<<rollnumber<<endl;
cout<<"name="<<name<<endl;
cout<<"branch="<<branch<<endl;
cout<<"year="<<year<<endl;
}
