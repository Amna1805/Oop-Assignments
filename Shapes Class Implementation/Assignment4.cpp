#include"Shape.h"
void draw_shapes(Shape *ss[],int size)
{
	cout<<"-----------------------------------------------------------------------------"<<endl;
	cout<<"                                :DRAW FUNCTION:"<<endl;
	cout<<"-----------------------------------------------------------------------------"<<endl;
	for(int i=0;i<size;i++)
	{
		switch(ss[i]->get_shape_type())
		{
			case 'L':static_cast<Line*>(ss[i])->draw();
			         break;
			case 'C':static_cast<Circle*>(ss[i])->draw();
			         break;
		    case 'T':static_cast<Triangle*>(ss[i])->draw();
			         break;
			default: cout<<"Invalid Input."<<endl;
			         break;
		}
		
	}
	
}
void Calculate_Area(Shape *ss[],int size)
{
	cout<<"-----------------------------------------------------------------------------"<<endl;
	cout<<"                           :CALCULATE AREA FUNCTION:"<<endl;
	cout<<"-----------------------------------------------------------------------------"<<endl;
	for(int i=0;i<size;i++)
	{
		switch(ss[i]->get_shape_type())
		{
			case 'L':static_cast<Line*>(ss[i])->Cal_Area();
			         break;
			case 'C':cout<<"Area ofCircle:"<<static_cast<Circle*>(ss[i])->Cal_Area()<<endl;
			         break;
		    case 'T':cout<<"Area of Traingle:"<<static_cast<Triangle*>(ss[i])->Cal_Area()<<endl;
			         break;
			default: cout<<"Invalid Input."<<endl;
			         break;
		}
		
	}
	
}
int main()
{
	Shape *S[5];
	Point p1(10,10),p2(3,5),p3(8,9),p4(88,99);
	S[0]=new Line(p1,p2);
	S[1]=new Circle(p2,35.6);
	Line l1(p1,p2),l2(p3,p4);
	S[2]=new Triangle(l1,l2,34,56.99,70);
	Point p(9,9),pp(8,99);
	S[3]=new Line(p,pp);
	S[4]=new Circle(pp,4);
	draw_shapes(S,5);
	Calculate_Area(S,5);
}
