#include<iostream>

#include<cstring>

using namespace std;

class Employee

{

	char name[30];

	int id;

	float sal;

public:

	Employee()

	{

		id = 0;

		sal = 0;

		cout << "Default Constructor is invoked" << endl;



	}

	Employee(char nm[30], int id1, float sal1)

	{

		strcpy_s(name, nm);

		id = id1;

		sal = sal1;

	}

	~Employee()

	{

		cout << "Destructor invoked";
	}

};

int main()

{

	{Employee e; cout << "Size is:" << sizeof(e); }

	{Employee d;}

	getchar();

	return 0;

}