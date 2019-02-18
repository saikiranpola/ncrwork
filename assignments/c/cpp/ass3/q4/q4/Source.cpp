#include<iostream>
using namespace std;
class A
{
	int a;
public:
	int d, e;
protected:
	int f;
	A()
	{
		a = 10;
		d = 5;
		e = 6;
		f = 7;
		cout << "a constructor"<<endl;
	}
};
class B:public A
{
	int b;
public:
	B()
	{
		b = 8;
		cout << "b constructor"<<endl;
	}
	void display()
	{
		cout << "in b:";
		cout << b    << d   << e   << f ;
	}
};
class C:private B
{
	int c;
public:
	C()
	{
		cout << "c constructor"<<endl;
	}
	void display()
	{
		cout << "in b:";
		cout << d  << e   <<f   ;
	}
};
class D :protected A
{
	int f;
public:
	D()
	{
		f = 7;
		cout << "d constructor"<<endl;
	}
	void display()
	{
		cout << "in b:";
		cout << d  << " >  " << e << " > " <<f  ;
	}
};
int main()
{
	D z;
	z.display();
	getchar();
	return 0;
}