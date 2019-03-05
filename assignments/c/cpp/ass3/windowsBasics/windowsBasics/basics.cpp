//#include<windows.h>
//#include<stdio.h>
//
//int main() {
//
//
//	/*BOOL IsTextUnicode(
//		const VOID *lpv,
//		int        iSize,
//		LPINT      lpiResult
//	);*/
//	/*int MultiByteToWideChar(
//		UINT                              CodePage,
//		DWORD                             dwFlags,
//		_In_NLS_string_(cbMultiByte)LPCCH lpMultiByteStr,
//		int                               cbMultiByte,
//		LPWSTR                            lpWideCharStr,
//		int                               cchWideChar
//	);
//*/
//
//	/*int WideCharToMultiByte(
//		UINT                               CodePage,
//		DWORD                              dwFlags,
//		_In_NLS_string_(cchWideChar)LPCWCH lpWideCharStr,
//		int                                cchWideChar,
//		LPSTR                              lpMultiByteStr,
//		int                                cbMultiByte,
//		LPCCH                              lpDefaultChar,
//		LPBOOL                             lpUsedDefaultChar
//	);
//*/
//	WCHAR *t = L"abc";
//	char *s = "gnyanee";
//	WCHAR *wideString = NULL;
//	int nlen= wcslen(t);
//	int slen= strlen(s);
//	printf("%d \n", nlen);
//	int b =IsTextUnicode(t, nlen*sizeof(WCHAR), NULL);
//	if (b == 0) {
//		printf("Not unicode \n");
//	}
//	else {
//		printf("unicode \n");
//	}
//
//	int k = MultiByteToWideChar(CP_UTF8, 0, s, -1, wideString, 0);
//	printf("No of bytes nedded for our wide coversion %d \n ",k);
//	  wideString = new WCHAR[k];
//
//  int e = MultiByteToWideChar(CP_UTF8, 0, s, -1, wideString, k);
//  printf(" l value is %d \n", e);
//  if (e == 0) {
//	  printf(" Error in conversion %d \n", GetLastError());
//  
//  }
//  else {
//	  printf(" wide string is %S \n", wideString);
//  }
//  char *multiByteString = NULL;
//  
//  int noOfBytes = WideCharToMultiByte(CP_UTF8, 0, wideString, -1, multiByteString, 0, NULL, NULL);
//
//  printf("  multiByte string requires %d bytes \n", noOfBytes);
//
//  multiByteString = new char[noOfBytes];
//  int e1 =WideCharToMultiByte(CP_UTF8, 0, wideString, -1, multiByteString, noOfBytes*sizeof(char), NULL, NULL);
//  if (e1 == 0) {
//	  printf(" Error in conversion to multiByte  %d \n", GetLastError());
//  }
//  else {
//	 printf("  multi byte string is %s", multiByteString);
//  }
//  
//  getchar();
//
//}