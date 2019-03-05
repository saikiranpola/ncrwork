#include<iostream>

#include<windows.h>

#define size 40000

using namespace std;

void main()

{

	LPCTSTR source = "%TEMP%";

	DWORD dstnsize;

	TCHAR expand[size];

	LPWSTR exp;

	BOOL valid;

	valid = ExpandEnvironmentStrings(

		source,

		expand,

		size

	);

	if (valid == 0)

	{

		cout << "Error" << endl;

	}

	else

	{

		wcout << expand << endl;

	}

	system("pause");

}