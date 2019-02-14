#include<iostream>
using namespace std;
class comp
{
	int r;
	int i;
public:
	comp(int a,int b)
	{
		r = a;
		i = b;
	}
	void display()
	{
		cout << r << "+i" << i << endl;
	}
	
	friend void add(comp c1, comp c2);
	friend void mul(comp c1, comp c2);
};
int main()
{
	comp t1(2, 3);
	cout << "first:";
	t1.display();
	comp t2(3, 4);
	cout << "second:";
	t2.display();
	cout << "sum is:";
	add(t1, t2);
	mul(t1, t2);



	getchar();
	return 0;
}
 void add(comp c1, comp c2)
{
	 int r1;
	 int i1;
	r1 = c1.r + c2.r;
	i1 = c1.i + c2.i;
	cout << r1 << "+i" << i1 << endl;
}
 void mul(comp c1, comp c2)
 {
	 int r1;
	 int i1;
	 r1 = ((c1.r*c2.r) - (c1.i*c2.i));
	 i1 = ((c2.r*c1.i) + (c1.r*c2.i));
	 cout << r1 << "+i" << i1 << endl;
 }