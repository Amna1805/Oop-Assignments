#include<cmath>
#include"Point.h"
class Shape
{
	Point p;
	public:
		Shape();
		void set_shape_type(char s);
		char get_shape_type()const;
		virtual void draw()const;
		virtual float Cal_Area()=0;
		virtual ~Shape();
};
Shape::~Shape()
{
   cout<<"Shape::Destructor Called."<<endl;
}
void Shape::draw()const
{
	cout<<"Shape."<<endl;
}
Shape::Shape()
{
}

class Line:public Shape
{
	Point p1,p2;
	public:
		Line();
		Line(Point p,Point pp);
		virtual void draw()const;
		virtual float Cal_Area();
		virtual ~Line();
};
void Line::draw()const
{
	cout<<"Line."<<endl;
}
float Line::Cal_Area()
{
	return 0;
}
Line::Line():p1(),p2()
{
}
Line::Line(Point p,Point pp):p1(p),p2(pp)
{
}
Line::~Line()
{
cout<<"Line::Destructor Called."<<endl;
}
class Circle:public Shape
{
	float radius;
	float area;
	Point p1;
	public:
		Circle();
		Circle(Point center,float r);
		virtual void draw()const;
		virtual float Cal_Area();
		virtual ~Circle();
		
};
Circle::~Circle()
{
cout<<"Circle::Destructor Called."<<endl;
}
float Circle::Cal_Area() 
{
	area=3.14*pow(radius,2);
	return area;
}
void Circle::draw()const
{
	cout<<"Circle."<<endl;
}
Circle::Circle():p1()
{
	radius=0.0;
}
Circle::Circle(Point center,float r):p1(center)
{
	radius=r;
}
class Triangle:public Shape
{
	float base,height;
	float area;
	int angle;
	Line l1,l2;
	public:
		Triangle();
		Triangle(Line l,Line ll,float b,float h,int a);
		virtual void draw()const;
		virtual float Cal_Area();
		virtual ~Triangle();
		
};
Triangle::~Triangle()
{
cout<<"Triangle::Destructor Called."<<endl;
}
float Triangle::Cal_Area()
{
	area=1/2.0*(base*height);
	return area;
}
void Triangle::draw()const
{
	cout<<"Triangle."<<endl;
}
Triangle::Triangle():l1(),l2()
{
	base=0.0;
	height=0.0;
	angle=0;
}
Triangle::Triangle(Line l,Line ll,float b,float h,int a):l1(l),l2(ll)
{
	base=b;
	height=h;
	angle=a;
}

