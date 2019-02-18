#include<iostream>
using namespace std;
class person
{
protected:
	char name[10];
	int age;
public:
	person()
	{
		strcpy_s(name, "kiran");
		age = 21;
		cout << "in person class" << endl;
	}
};
class physique :virtual public person
{
	int height, weight;

public:
	physique()
	{
		height = 170;
		weight = 65;
		cout << "in physique class" << endl;
	}
};
class family :public virtual person
{
	int noc; char rel[10];
public:
	family()
	{
		noc = 5;
		strcpy_s(rel, "hac");
		cout << "in family class" << endl;

	}
};
class emp :public physique, public family
{
	int empno, salary;
public:
	emp()
	{
		empno = 56;
		salary = 54000;
		cout <<name<<"   lets see     "<<age   <<"in emp class"<<endl;
	}

};
int main()
{
	emp e;
	

	getchar();
	return 0;
}