#include<cmath>
#include"Point.h"
class Shape
{
	Point p;
	protected:
		char shape_type;
	public:
		Shape();
		Shape(char s);
		void set_shape_type(char s);
		char get_shape_type()const;
		void draw()const;
		float Cal_Area()const;
		~Shape();
};
Shape::~Shape()
{
   
}
float Shape::Cal_Area()const
{
	return 0;
}
void Shape::draw()const
{
	cout<<"Shape."<<endl;
}
Shape::Shape()
{
	shape_type=NULL;
}
Shape::Shape(char s)
{
	shape_type=s;
}
void Shape::set_shape_type(char s)
{
	shape_type=s;
}
char Shape::get_shape_type() const
{
	return shape_type;
}
class Line:public Shape
{
	Point p1,p2;
	public:
		Line();
		Line(Point p,Point pp);
		void draw()const;
		float Cal_Area() const;
		~Line();
};
void Line::draw()const
{
	cout<<"Line."<<endl;
}
float Line::Cal_Area()const
{
	cout<<"Line has no Area."<<endl;
}
Line::Line():p1(),p2()
{
	shape_type='L';
}
Line::Line(Point p,Point pp):p1(p),p2(pp)
{
	shape_type='L';
}
Line::~Line()
{

}
class Circle:public Shape
{
	float radius;
	float area;
	Point p1;
	public:
		Circle();
		Circle(Point center,float r);
		void draw()const;
		float Cal_Area();
		~Circle();
		
};
Circle::~Circle()
{

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
	shape_type='C';
}
Circle::Circle(Point center,float r):p1(center)
{
	radius=r;
	shape_type='C';
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
		void draw()const;
		float Cal_Area();
		~Triangle();
		
};
Triangle::~Triangle()
{

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
	shape_type='T';
	angle=0;
}
Triangle::Triangle(Line l,Line ll,float b,float h,int a):l1(l),l2(ll)
{
	base=b;
	height=h;
	shape_type='T';
	angle=a;
}

