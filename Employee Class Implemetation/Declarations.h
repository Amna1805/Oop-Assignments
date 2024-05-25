#include"Definitions.h"
int Employee::get_no_of_obj() 
{
	return no_of_obj;
}
Employee::Employee():Emp_num(0)
{
	Emp_name=new char[strlen("Null")+1];
	strcpy(Emp_name,"Null");
	salary=0.0;
    Emp_designation=new char[strlen("Null")+1];
	strcpy(Emp_designation,"Null");
    no_of_obj++;
}
int Employee::no_of_obj;
Employee::~Employee()
{
	int null;
	if(Emp_name)
	{
		delete[]Emp_name;
	}
	else
	{
		null;
	}
	if(Emp_designation)
	{
		delete[]Emp_designation;
	}
	else
	{
		null;
	}
	cout<<"Object "<<no_of_obj<<" destroyed."<<endl;
	no_of_obj--;
}
Employee::Employee(int n):Emp_num(n)
{
	Emp_name="NULL";
	salary=0;
	Emp_designation="NULL";
		no_of_obj++;
}
Employee &Employee::
Set_Emp_name(char *aname)
{
	int len=strlen(aname);
	Emp_name=new char[len+1];
	strcpy(Emp_name,aname);
	return *this;
}
Employee &Employee::Set_Emp_salary(int s)
{
	salary=s;
	return *this;
}
void Employee::Set_Emp_designation(char *d)
{
		int l=strlen(d);
	Emp_designation=new char[l+1];
	strcpy(Emp_designation,d);
}
int Employee::get_Emp_num()const 
{
	return Emp_num;
}
char* Employee::get_Emp_name() const
{
	return Emp_name;
}
int Employee::get_Emp_salary() const
{
	return salary;
}
char* Employee::get_Emp_designation()const 
{
	return Emp_designation;
}
Employee::Employee(const Employee &obj):Emp_num(obj.Emp_num)
{
	Emp_name=new char[strlen(obj.Emp_name)+1];
	strcpy(Emp_name,obj.Emp_name);
	Emp_designation=new char[strlen(obj.Emp_designation)+1];
	strcpy(Emp_designation,obj.Emp_designation);
	salary=obj.salary;
	no_of_obj++;
}
