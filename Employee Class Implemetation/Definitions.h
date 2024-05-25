#include<iostream>
#include<cstring>
using namespace std;
class Employee
{
   const  int Emp_num;
   char*Emp_name;
   int salary;
   static int no_of_obj;
   char *Emp_designation;
   public:
    Employee();
    ~Employee();
     Employee(int n);	
     Employee &Set_Emp_name(char *aname);	
     Employee &Set_Emp_salary(int s);	
     void Set_Emp_designation(char *d);
     int get_Emp_num() const ;
     char* get_Emp_name() const ;
     int get_Emp_salary() const ;
     char* get_Emp_designation() const ;
     Employee(const Employee &obj);
     static int get_no_of_obj();
};
