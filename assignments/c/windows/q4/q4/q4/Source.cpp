#include<Windows.h>

#include<iostream>

#define SIZE 10

using namespace std;

int main()

{

	HANDLE File_Ptr;

	DWORD dword;

	char buff[SIZE] = { 0 };

	File_Ptr = CreateFileA("textfile.txt", GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_READONLY, NULL);

	if (File_Ptr == INVALID_HANDLE_VALUE)

	{

		cout << "Couldn't Open File" << endl;

	}

	else

	{

		int offset = 9;

		while (1)

		{

			if (FALSE == ReadFile(File_Ptr, buff, offset, &dword, NULL))

			{

				cout << "Couldn't Read File" << endl;

			}

			else if (dword == 0)

			{

				cout << endl << "EOF" << endl;

				break;

			}

			else if (dword <= offset)

			{



				buff[dword] = '\0';

				cout << buff;

			}

		}

	}

	system("pause");

	return 0;

}