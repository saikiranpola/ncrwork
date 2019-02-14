#include<iostream>
using namespace std;
class emp
{
	int empno;
	char name[10];
	float sal;
public:
	emp()
	{

	}
	emp(int n, char a[10], float s)
	{
		empno = n;
		strcpy_s(name, a);
		sal = s;
	}
	void getdata(int n, char a[10], float s)
	{
		empno = n;
		strcpy_s(name, a);
		sal = s;
	}
	void putdata()
	{
		cout << empno << " " << name << " " << sal << endl;
	}
	friend istream& operator >> (istream &cin, emp &c);
};
int main()
{
	int a;
	char b[10];
	float c;
	emp e[5];

		
	for(int i=0;i<5;i++)
	{
		cin >> a >> b >> c;
		e[i].getdata(a, b, c);
		e[i].putdata();

		
	}
	getchar();
	return 0;
}
istream& operator >> (istream &cin, emp &c)
{
	cin >> c.empno >> c.name >> c.sal;
}