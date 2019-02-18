#include<iostream>
using namespace std;
class shape
{
protected:
	int s;
	int l, b;
	shape()
	{
		s = 10;
		l = 5;
		b = 8;
	}
	void display()
	{
		cout << "base class";
	}
};
class tri :public shape
{
	int area;
public:
	void display()
	{
		cout << "area of triangle is:" << ((1.732/4)*(s*s));
	}
};
class  sq:public shape
{
	int area;
public:
	void display()
	{
		cout << "area of sq is:" <<4*s;
	}
};
class  rect:public shape
{
	int area;
public:
	void display()
	{
		cout << "area of rect is:" <<l*b;
	}
};
int main()
{
	tri t;
	t.display();
	sq s;
	s.display();
	rect r;
	r.display();
	getchar();
	return 0;

}