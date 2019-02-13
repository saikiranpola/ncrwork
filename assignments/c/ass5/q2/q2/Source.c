#include<stdio.h>
struct s
{
	int a;
	char b;
};
union u
{
	int a;
	char b;
};
int main()
{
	printf("size of structure is %d\n", sizeof(struct s));
	printf("size of union is %d\n", sizeof(union u));
	getch();
	return 0;
}