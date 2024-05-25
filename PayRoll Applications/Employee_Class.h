#include<iostream>
#include<cstring>
#include"String.h"
#include"date.h"
using namespace std;
class Person
{
	String Emp_name;
	public:
		Person();
		Person(char *n);
		void set_emp_name(char*n);
		char* get_emp_name()const;
		
};
Person::Person():Emp_name()
{

}
Person::Person(char*n):Emp_name(n)
{

}
char* Person::get_emp_name()const
{
	return Emp_name.get_String();
}
void Person::set_emp_name(char*n)
{
	Emp_name.Set_String(n);
}
class Employee:public Person
{
	Date dob;
	char Emp_type;
	float tax_rate;
	public:
		Employee();
		void print() const;
		Employee(char*n,float t_r,const Date&d,char t);
		~Employee();
		void set_tax_rate(float tr);
		void set_day(int d);
		void set_month(int m);
		void set_year(int y);
		void set_Emp_type(char t);
		char get_Emp_type( )const;
	    float get_tax_rate()const;
        int get_day()const;
        int get_month()const;
        int get_year()const;
        float calculate_salary() const;
        void display_calculate_salary() const;
};
Employee::~Employee()
{
	cout<<"Destructor::Employee called."<<endl;
}
void Employee::display_calculate_salary() const
{
	cout<<"Default."<<endl;
}
char Employee::get_Emp_type() const
{
	return Emp_type;
}
void Employee::set_Emp_type(char t)
{
	Emp_type=t;
}
float Employee::calculate_salary() const
{
	return 0;
}
int Employee::get_day()const
{
	return dob.get_day();
}
int Employee::get_month()const
{
	return dob.get_month();
}
int Employee::get_year()const
{
	return dob.get_year();
}
void Employee::set_day(int d)
{
			dob.Set_date(d);
}
void Employee::set_month(int m)
{
			dob.Set_month(m);
}
void Employee::set_year(int y)
{
			dob.Set_year(y);
}
void Employee::print() const
{
	cout<<"Name:"<<get_emp_name()<<endl;
	cout<<"Tax_Rate:"<<tax_rate<<endl;
	cout<<"Date of Joining:"<<get_day()<<"/"<<get_month()<<"/"<<get_year()<<endl;
}

float Employee::get_tax_rate()const
{
	return tax_rate;
}
void Employee::set_tax_rate(float tr)
{
	tax_rate=tr;
}
Employee::Employee(char*n,float t_r,const Date&d,char t):Person(n),dob(d)
{
	cout<<"E";
	tax_rate=t_r;
	Emp_type=t;
}
Employee::Employee():Person(),dob()
{
	tax_rate=0.0;
	Emp_type=NULL;
}
class Salaried_Employee:public Employee
{
	float salary;
	public:
		Salaried_Employee();
		Salaried_Employee(char*n,float tr,const Date&d,char t,float salary);
		~Salaried_Employee();
	    void set_salary(float s);
		float get_salary() const;
		float calculate_salary() const;	
		void display_calculate_salary() const;	
		void print() const;	
};
Salaried_Employee::~Salaried_Employee()
{
	cout<<"Destructor::Salaried_Employee called."<<endl;
}
void Salaried_Employee::display_calculate_salary() const
{
	cout<<"Calculated Salary:"<<calculate_salary()<<endl;
}
void Salaried_Employee::print() const
	{
	 cout<<":SALARIED EMPLOYEE:"<<endl;
     Employee::print();
	cout<<"Salary:"<<get_salary()<<endl;
	}
Salaried_Employee::Salaried_Employee():Employee()
{
	salary=0;
}
Salaried_Employee::Salaried_Employee(char*n,float tr,const Date&d,char t,float s):Employee(n,tr,d,t)
{
	salary=s;
	cout<<"s";
}
void Salaried_Employee::set_salary(float s)
{
	salary=s;
}
float Salaried_Employee::get_salary() const
{
	return salary;
}
float Salaried_Employee::calculate_salary() const
{
	float tax;
	tax=salary*get_tax_rate();
	return salary-tax;
}
class Hourly_Employee:public Employee
{
	int hours;
	float hourly_rate;
	public:
	    Hourly_Employee();
	    Hourly_Employee(char*n,float tr,const Date&d,char t,int h,float hr);
		~Hourly_Employee();
		void set_s_hours(int h);
		int s_get_hours() const;
		void set_hour_rate(float hr);
		float get_hour_rate() const;
		float calculate_salary() const;	
		void display_calculate_salary() const;
	    void print() const;	
};
 Hourly_Employee::~ Hourly_Employee()
{
	cout<<"Destructor:: Hourly_Employee called."<<endl;
}
void Hourly_Employee::display_calculate_salary() const
{
	cout<<"Calculated Salary:"<<calculate_salary()<<endl;
}
Hourly_Employee::Hourly_Employee():Employee()
{
	hours=0;
	hourly_rate=0;
}
Hourly_Employee::Hourly_Employee(char*n,float tr,const Date&d,char t,int h,float hr):Employee(n,tr,d,t)
{
	hours=h;
	hourly_rate=hr;
}
void Hourly_Employee::set_s_hours(int h)
{
	hours=h;
}
int Hourly_Employee::s_get_hours() const
{
	return hours;
}
void Hourly_Employee::set_hour_rate(float hr)
{
	hourly_rate=hr;
}
float Hourly_Employee::get_hour_rate() const
{
	return hourly_rate;
}
void Hourly_Employee::print() const
{
	cout<<":HOURLY EMPLOYEE:"<<endl;
	Employee::print();
	cout<<"Hours:"<<s_get_hours()<<endl;
	cout<<"Hourly Rate:"<<get_hour_rate()<<endl;
}
float Hourly_Employee::calculate_salary() const
{
	double grosspay,tax;
	grosspay=hours*hourly_rate;
	tax=grosspay*get_tax_rate();
	return grosspay-tax;
}
class Commission_Employee:public Employee
{
	float sales;
	float commission_rate;
	public:
		Commission_Employee();
	    Commission_Employee(char*n,float tr,const Date&d,char t,float s ,float cr);
		~Commission_Employee();
		void set_sales(float s);
		float get_sales() const;
		void set_comm_rate(float hr);
		float get_comm_rate() const;
		float calculate_salary() const;	
		void display_calculate_salary() const;
		void print() const;	
};
Commission_Employee::~Commission_Employee()
{
	cout<<"Destructor::Commission_Employee called."<<endl;
}
Commission_Employee::Commission_Employee():Employee()
{
	sales=0;
	commission_rate=0;
}
Commission_Employee::Commission_Employee(char*n,float tr,const Date&d,char t,float s,float cr):Employee(n,tr,d,t)
{
	sales=s;
	commission_rate=cr;
}

void Commission_Employee::set_sales(float s)
{
	sales=s;
}
float Commission_Employee::get_sales() const
{
	return sales;
}
void Commission_Employee::set_comm_rate(float cr)
{
	commission_rate=cr;
}
float Commission_Employee::get_comm_rate() const
{
	return commission_rate;
}
void Commission_Employee::print() const
{
	cout<<":COMMISSIONED EMPLOYEE:"<<endl;
	Employee::print();
	cout<<"Sales:"<<get_sales()<<endl;
	cout<<"Commission Rate:"<<get_comm_rate()<<endl;
}
float Commission_Employee::calculate_salary() const
{
	double grosspay,tax;
	grosspay=sales*commission_rate;
	tax=grosspay*get_tax_rate();
	return grosspay-tax;
}
void  Commission_Employee::display_calculate_salary() const
{
	cout<<"Calculated Salary:"<<calculate_salary()<<endl;
}

