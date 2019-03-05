#include<iostream>
using namespace std;
template<class t>
class stack
{
	t a[10];
	int top;
public:
	stack()
	{
		top = -1;
	}
	void push(t item)
	{
		a[++top] = item;
		cout << "item pushed is"<<a[top];
	}
};
int main()
{
	stack<int>s;
	int a;
	cin >> a;
	s.push(a);
	float f;
	cin >> f;
	s.push(f);
	
	

	system("pause");
	return 0;
}