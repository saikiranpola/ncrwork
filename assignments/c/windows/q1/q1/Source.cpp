#include<Windows.h>

#include<stdio.h>

#include<stdlib.h>

int main()

{

	char *b = "kiran";

	WCHAR *j = L"pola";

	char *mb = NULL;

	WCHAR *wc = NULL;

	int x = strlen(b);

	int y = wcslen(j);

	int u = IsTextUnicode(b, sizeof(char)*x, NULL);

	int u1 = IsTextUnicode(j, sizeof(WCHAR)*y, NULL);

	if (u == 1)

	{

		printf("It is unicode");

	}

	else

		printf("it is not unicode");

	if (u1 == 1)

	{

		printf("It is unicode");

	}

	else

		printf("it is not unicode");

	wc = (WCHAR *)malloc(sizeof(WCHAR)*(x + 1));

	int k = MultiByteToWideChar(CP_UTF8, 0, b, -1, wc, (x + 1));

	if (k == 0)

		printf("it cannot be converted : %d \n", GetLastError());

	else

		printf("can be converted : %S \n", wc);

	int l = WideCharToMultiByte(CP_UTF8, 0, j, -1, mb, 0, NULL, NULL);

	mb = new char[l];

	int l1 = WideCharToMultiByte(CP_UTF8, 0, j, -1, mb, l, NULL, NULL);

	if (l1 == 0)

	{

		printf("cannot be converted .error(%d)", GetLastError());

	}

	else

		printf("Can be converted...is %s\n", mb);

	system("pause");

	return 0;

}