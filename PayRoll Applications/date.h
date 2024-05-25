#include<iostream>
using namespace std;
class Date
{
int day;
int month;
int year;
static Date Default_date;
public:
static Date Set_Default_date(int dd,int mm,int yy);
Date();
~Date();
void Set_date(int d);
void Set_month(int m);
void Set_year(int y);
int get_day() const;
int get_month() const;
int get_year() const;
Date(int d,int m,int y);
};
Date::Date(int d,int m,int y)
{
	day=d;
	month=m;
	year=y;
}
Date Date::Set_Default_date(int dd,int mm,int yy)
{
	if(dd>=1&&dd<=31)
	{	Default_date.Set_date(dd);
		
	}
	else
	{
			Default_date.Set_date(01);
	}
	if(mm>=1&&mm<=12)
	{
	
		Default_date.Set_month(mm);
		
	}
	else
	{
	
		Default_date.Set_month(01);
	}
		Default_date.Set_year(yy);
}
Date::Date()
{
day=0;
month=0;
year=0;
	
}
Date::~Date()
{
	cout<<"Destructor Called."<<endl;
}
void Date::Set_date(int d)
{
	if(d>=1&&d<=31)
	{
		day=d;
	}
	else
	{
	day=Default_date.day;
	}
}
void Date::Set_month(int m)
{
	if(m>=1&&m<=12)
	{
		month=m;
	}
	else
	{
		month=Default_date.month;
	}
}
void Date::Set_year(int y)
{
	if(y>=1999&&y<=2021)
	{
		year=y;
	}
	else
	{
		year=Default_date.year;
	}
	
}
int Date::get_day() const
{
	return day;
}
int Date::get_month() const
{
	return month;
}
int Date::get_year() const
{
	return year;
}

Date Date::Default_date=Set_Default_date(1,1,2000);

