#include<iostream>
#include<cstring>
using namespace std;
class stu
{

	char name[10];
	char grade[10];
	int m1, m2, m3;
	float avg;
 public:
	void setdata(char *n,int ma1,int ma2,int ma3)
	{
		strcpy_s(name,10,n);
		m1 = ma1;
		m2 = ma2;
		m3 = ma3;
	}
	void avrg()
	{
		avg = ((m1 + m2 + m3) / 3.0f);
	}
	void grad()
	{
		if (avg > 60)
		{
			strcpy_s(grade,"first");
		}
		else if ((avg > 50) && (avg < 60))
		{
			strcpy_s(grade,"second");
		}
		else if ((avg > 40) && (avg < 50))
		{
			strcpy_s(grade,"Third");
		}
		else if ((m1 <= 40) || (m2 <= 40) || (m3 <= 40))
		{
			strcpy_s(grade,"fail");
		
		}
	}
	void display()
	{
		cout << "name is:" << name<<endl << "grade is:" << grade << endl;
	}

};
int main()
{
	stu s;
	s.setdata("kiran", 60, 70, 80);
	s.avrg();
	s.grad();
	s.display();
	stu t;
	t.setdata("narik", 40, 50, 60);
	t.avrg();
	t.grad();
	t.display();
	getchar();
	return 0;
}