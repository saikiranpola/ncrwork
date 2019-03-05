#include<windows.h>
#include<stdio.h>
#include<tchar.h>
#define BUFFERSIZE 20
DWORD g_BytesTransferred = 0;

void _tmain(int argc, TCHAR *argv[])
{
	HANDLE hFile,hFile1;
	DWORD k,k1;
	char   ReadBuffer[BUFFERSIZE] = { 0 };


	printf("\n");
	if (argc != 3)
	{
		printf(" Incorrect number of arguments\n\n");
		_tprintf(TEXT("\n\t%s <text_file_name>\n"), argv[0]);
		return;
	}

	hFile = CreateFile(argv[1],GENERIC_READ,FILE_SHARE_READ,NULL,OPEN_EXISTING,FILE_ATTRIBUTE_NORMAL, NULL);                

	if (hFile == INVALID_HANDLE_VALUE)
	{
		_tprintf(TEXT(" unable to open file \"%s\" for read.\n"), argv[1]);
		getchar();
		return;
	}
	BOOL ret = ReadFile(hFile, ReadBuffer, BUFFERSIZE - 1, &k, NULL);
	if (ret==FALSE)
	{
		
		printf(" Unable to read from file.\n GetLastError %d\n", GetLastError());
		CloseHandle(hFile);
		return;
	}
	else 
	{
		_tprintf(TEXT("\nData read from %s: %S \n"), argv[1], ReadBuffer);

	}
	hFile1 = CreateFile(argv[2], GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (hFile1 == INVALID_HANDLE_VALUE)
	{
		_tprintf(TEXT(" unable to open file \"%s\" for write.\n"), argv[2]);
		getchar();
		return;
	}
	BOOL rett= WriteFile(hFile1,ReadBuffer, BUFFERSIZE,&k1,NULL);
	if (rett == FALSE)
	{

		printf(" Unable to write to file.\n GetLastError %d\n", GetLastError());
		getchar();
		CloseHandle(hFile1);
		return;
	}

	getchar();
	getchar();
	CloseHandle(hFile);
}
