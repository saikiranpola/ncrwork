#include<iostream>

#include<Windows.h>

using namespace std;

void main() {

	HANDLE getevent;

	getevent = CreateEventA(NULL, FALSE, TRUE, "Created an event");

	if (getevent == NULL)

	{

		cout << "Error" << endl;

		cout << "The error code: " << GetLastError() << endl;



	}

	else

	{

		cout << "Event created";

	}

	system("pause");

}