#include"Employee_Class.h"
void generate_pay_roll(Employee* e[],int size)
{
	cout<<endl<<endl;
	cout<<"----------------------------------------------------------------------------"<<endl;
	cout<<"                 :PAY ROLL SLIP WITH ALL DETAILS OF EMPLOYEE:"<<endl;
	cout<<"----------------------------------------------------------------------------"<<endl;
	for(int i=0;i<size;i++)
	{
		    switch(e[i]->get_Emp_type())
		    {
		    	case 'S': cout<<"----------------------------------------------------------------------------"<<endl;
			              static_cast<Salaried_Employee *>(e[i])->print();
			              static_cast<Salaried_Employee *>(e[i])->display_calculate_salary();
			              cout<<"----------------------------------------------------------------------------"<<endl;
			              break;
		    	case 'H': cout<<"----------------------------------------------------------------------------"<<endl;
			              static_cast<Hourly_Employee *>(e[i])->print();
			              static_cast<Hourly_Employee *>(e[i])->display_calculate_salary();
			              cout<<"----------------------------------------------------------------------------"<<endl;
			              break; 
				case 'C':cout<<"----------------------------------------------------------------------------"<<endl;
			              static_cast<Commission_Employee *>(e[i])->print();
			              static_cast<Commission_Employee *>(e[i])->display_calculate_salary();
			              cout<<"----------------------------------------------------------------------------"<<endl;
			              break; 
			   default:cout<<"Invalid.";
			           break; 
			}
	}
	

}
int main()
{
	int size;
	int c;
	cout<<"----------------------------------------------------------------------------"<<endl;
	cout<<"                        :WELCOME TO PAYROLL MANAGEMENT:                 "<<endl;
	cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"                             :EMPLOYEE CATEGORIES:                 "<<endl;
    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"                              1-SALARIED EMPLOYEE"<<endl;
	cout<<"                              2-HOURLY EMPLOYEE"<<endl;
	cout<<"                              3-COMMISSIONED EMPLOYEE"<<endl;
	cout<<"----------------------------------------------------------------------------"<<endl;
	cout<<"Enter Number of Employees:";
	cin>>size;
	cout<<"----------------------------------------------------------------------------"<<endl;
	Employee* E1[size];
	for(int i=0;i<size;i++)
	{
		char name[50];
     	float tr;
     	int d,m,y;
     	cout<<"----------------------------------------------------------------------------"<<endl;
     	cout<<"                          Enter Details of "<<i+1<<" Employee:       "<<endl;
	    cout<<"----------------------------------------------------------------------------"<<endl;
		cout<<"Press 1 for Salaried Employee.\nPress 2 for Hourly Employee\nPress 3 for Commissioned Employee."<<endl;
		cout<<"----------------------------------------------------------------------------"<<endl;
		cout<<"Enter Choice:"<<endl;
		cin>>c;
		cout<<"----------------------------------------------------------------------------"<<endl;
		if(c==1)
		{
		float s;
		cin.get();
		cout<<"----------------------------------------------------------------------------"<<endl;
		cout<<"                                :SALARIED EMPLOYEE:"<<endl;
		cout<<"----------------------------------------------------------------------------"<<endl;
		cout<<"Enter Name:";
		cin.getline(name,50);
		cout<<"Enter Tax_rate:";
		cin>>tr;
		cout<<"Enter Date of joining:";
		cout<<"Enter day,month and year:";
		cin>>d>>m>>y;
		cout<<"Enter Salary:";
		cin>>s;
		Date d1(d,m,y);
		E1[i]=new Salaried_Employee();
		E1[i]->set_emp_name(name);
		E1[i]->set_tax_rate(tr);
	    E1[i]->set_day(d);
		E1[i]->set_month(m);
		E1[i]->set_year(y);
		static_cast<Salaried_Employee *>(E1[i])->set_salary(s);
		E1[i]->set_Emp_type('S');
		//Setting values using setter functions.
		}	
		else if(c==2)
		{
		int h;
		float hr;
		cout<<"----------------------------------------------------------------------------"<<endl;
		cout<<"                                HOURLY EMPLOYEE:"<<endl;
		cout<<"----------------------------------------------------------------------------"<<endl;
		cin.get();
		cout<<"Enter Name:";
		cin.getline(name,50);
		cout<<"Enter Tax_rate:";
		cin>>tr;
		cout<<"Enter Date of joining:";
		cout<<"Enter day,month and year:";
		cin>>d>>m>>y;
		cout<<"Enter Hours:";
		cin>>h;
		cout<<"Enter Hours_rate:";
		cin>>hr;
		Date d1(d,m,y);
		E1[i]=new Hourly_Employee();
		E1[i]->set_emp_name(name);
		E1[i]->set_tax_rate(tr);
		E1[i]->set_day(d);
		E1[i]->set_month(m);
		static_cast<Hourly_Employee *>(E1[i])->set_s_hours(h);
		static_cast<Hourly_Employee *>(E1[i])->set_hour_rate(hr);
		E1[i]->set_Emp_type('H');
		//Setting values using setter functions.
		}
		else if(c==3)
		{
	    float s;
		float cr;
		cout<<"----------------------------------------------------------------------------"<<endl;
		cout<<"                             :COMMISSIONED EMPLOYEE:"<<endl;
		cout<<"----------------------------------------------------------------------------"<<endl;
		cin.get();
		cout<<"Enter Name:";
		cin.getline(name,50);
		cout<<"Enter Tax_rate:";
		cin>>tr;
		cout<<"Enter Date of joining:";
		cout<<"Enter day,month and year:";
		cin>>d>>m>>y;
		cout<<"Enter Sales:";
		cin>>s;
		cout<<"Enter Commission_rate:";
		cin>>cr;
		Date d1(d,m,y);
		E1[i]=new Commission_Employee(name,tr,d1,'C',s,cr); //Parametrized Comstructor of Commisione_Employee called.
		}
		else
		cout<<"Invalid Input."<<endl;
	}
    generate_pay_roll(E1,size);
}

