
#include"Employee_Class.h"
void generate_pay_roll(Employee* e[],int size)
{
	cout<<endl<<endl;
	cout<<"----------------------------------------------------------------------------"<<endl;
	cout<<"                 :PAY ROLL SLIP WITH ALL DETAILS OF EMPLOYEE:"<<endl;
	cout<<"----------------------------------------------------------------------------"<<endl;
	for(int i=0;i<size;i++)
	{
		e[i]->print();
		e[i]->display_calculate_salary();
	    cout<<"----------------------------------------------------------------------------"<<endl;
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
		E1[i]=new Salaried_Employee(name,tr,d1,s);//Parametrized Comstructor of Salaried_Employee called.
	
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
		E1[i]=new Hourly_Employee(name,tr,d1,h,hr);//Parametrized Comstructor of Hourly_Employee called.
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
		E1[i]=new Commission_Employee(name,tr,d1,s,cr); //Parametrized Comstructor of Commisione_Employee called.
		}
		else
		cout<<"Invalid Input."<<endl;
	}
    generate_pay_roll(E1,size);
    for(int i=0;i<size;i++)
    {
    	delete E1[i];
	}
    
}

