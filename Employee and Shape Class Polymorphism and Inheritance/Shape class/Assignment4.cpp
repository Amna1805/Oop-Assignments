#include"Shape.h"
void draw_shapes(Shape *ss[],int size)
{
	cout<<"-----------------------------------------------------------------------------"<<endl;
	cout<<"                                :DRAW FUNCTION:"<<endl;
	cout<<"-----------------------------------------------------------------------------"<<endl;
	for(int i=0;i<size;i++)
	{
		ss[i]->draw();
		
	}
	
}
void Calculate_Area(Shape *ss[],int size)
{
	cout<<"-----------------------------------------------------------------------------"<<endl;
	cout<<"                           :CALCULATE AREA FUNCTION:"<<endl;
	cout<<"-----------------------------------------------------------------------------"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<"Area:"<<ss[i]->Cal_Area()<<endl;
		
	}
	cout<<"-----------------------------------------------------------------------------"<<endl;
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
	for(int i=0;i<5;i++)
	{
		delete S[i];
	}
}
