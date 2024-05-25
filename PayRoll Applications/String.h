#include<iostream>
#include<cstring>
using namespace std;
class String
{
	char *name;
	public:
		String();
		String(char*n);
		~String();
		char* get_String()const;
		void Set_String(char*aname);
		String(const String&obj);
};
String::String(char*n)
{
	name=new char[strlen(n)+1];
	strcpy(name,n);
	}
String::String()
{
	name=NULL;
}
String::~String()
{
	if(name)
	{
		delete []name;
	}
}
char* String::get_String()const
{
	return name;
}
void String::Set_String(char*aname)
{
	if(name!=NULL)
	{
		delete []name;
		name=NULL;
	}
	if(aname!=NULL)
	{
			name=new char[strlen(aname)+1];
	       strcpy(name,aname);
	}
}
String::String(const String&obj)
{
	if(obj.name!=NULL)
	{
		name=new char[strlen(obj.name)+1];
		strcpy(name,obj.name);
	}
	else
	name=NULL;
}
