#include<iostream>
using namespace std;
class Point
{
	int x,y;
	public:
		Point();
		Point(int a,int b);
		void set_point1(int aa);
		void set_point2(int bb);
		int get_point1() const;
		int get_point2() const;
		~Point();
};
Point::Point()
{
	x=0;
	x=y;
}
Point::Point(int a,int b)
{
	x=a;
	y=b;
}
void Point::set_point1(int aa)
{
	x=aa;
}
void Point::set_point2(int bb)
{
	y=bb;
}
Point::~Point()
{
cout<<"Point::Destructor called."<<endl;	
}
