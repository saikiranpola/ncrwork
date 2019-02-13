#include<iostream>
using namespace std;
class time
{
	int hr;
	int min;
	int sec;
public:
	time()
	{
		hr = 0;
		min = 0;
		sec = 0;
	}
	time(int a, int b, int c)
	{
		hr = a;
		min = b;
		sec = c;
	}
	void sum(time d,time e)
	{
		sec = d.sec + e.sec;
		min = sec / 60;
		sec = sec % 60;
		min = d.min + e.min + min;
		hr = min / 60;
		min = min % 60;
		hr = hr + d.hr + e.hr;

		
		}//ghidugjnf
	void display()
	{
		cout << "time is  " << hr << ":" << min << ":" << sec<<endl;
	}
};
int main()
{
	time t;
	t.display();
	time t1(2, 34, 30);
	t1.display();
	time t2(1, 30, 30);
	t2.display();
	time t3;
	t3.sum(t1,t2);
	cout << "sum is:";
	t3.display();
	getchar();
	return 0;
}