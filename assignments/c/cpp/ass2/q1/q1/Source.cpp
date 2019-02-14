#include<iostream>
using namespace std;
class polar
{
	int r;
	int t;
public:
	static int i;
	void count()
	{
		++i;
		cout << i<<endl;
	}
};
int polar::i;
int main()
{
	polar p1;
	cout << "p1 is active";
	p1.count();
	{
		polar p2;
		cout << "p2 is active";
		p2.count();
		polar p3;
		cout << "p3 is active";
	}
	
	cout << "only p1 is active";
	p1.count();
	


	getchar();
	return 0;
}