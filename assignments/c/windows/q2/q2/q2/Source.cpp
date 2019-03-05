#include<stdio.h>

#include<windows.h>

#include<shellapi.h>

#include<tchar.h>

int main()

{

	LPWSTR *args_list;

	int i, arg_num;

	args_list = CommandLineToArgvW(GetCommandLineW(), &arg_num);

	if (args_list == NULL)

		wprintf(L"no commandline arguments\n");

	else

	{

		for (i = 0; i < arg_num; i++)

			wprintf(L"%d-%s\n", i, args_list[i]);

	}

	system("pause");

	return 0;

}