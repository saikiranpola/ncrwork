#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int a, b = 0, i = 0, flag = 0, c = 0;;
	scanf_s("%d", &a);
	flag = a;
	while (a % 2 != 1)
	{
		i++;
		a = a / 2;

	}
	a = flag;
	while (a > 0)
	{
		b = (b * 10) + (a % 2);
		a = a / 2;
	}
	if (i == 0)
	{

	}
	else
	{
		b = b * (int)pow(10, i);
	}
	//	c = b;
	printf(" binary format is %d", b);
	i = 0;
	a = 0;
	while (b > 0)
	{
		a = a + ((int)(b % 10)*pow(2, i));
		i++;
		b = b / 10;
	}
	printf("\ndecimal format is %d", a);
	c = a;
	char hexa[8];
	i = 0;
	while (a > 0)
	{
		b = (a % 16);
		//printf("  %d", b);
		if (b < 10)
		{
			hexa[i] = (48 + b);
			//printf("%c", 48+b);
			//	printf("\n%c", hexa[i]);
		}
		else
		{
			hexa[i] = (b - 10 + 65);
			//printf("\n%c", hexa[i]);
		}
		i++;
		a = a / 16;
	}
	hexa[i] = '\0';
	flag = 0;
	c = 0;
	for (int j = i - 1;j >= 0;j--)
	{
		printf(" %c", hexa[j]);
	}
	int d;
	for (int j = i - 1;j >= 0;j--)
	{

		if (hexa[j] >= 65)
		{
			d = hexa[j] - 55;
			printf("   %d", d);
			c = c + (d*pow(16, j));
		}
		else
		{
			d = hexa[j] - 48;
			printf("   %d", d);
			c = c + (d*pow(16, j));
		}
		flag++;

	}
	printf(" back to decimal %d", c);
	//

	getch();
	return 0;
}