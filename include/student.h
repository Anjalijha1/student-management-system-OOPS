#pragma once
#include<string>
class Student
{
private:
int rollnumber;
std::string name;
std::string branch;
int year;
public:
Student();
void inputdetails();
void displaydetails();
};
