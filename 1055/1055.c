#include <stdio.h>
int main(void)
{
	int a, b, c; char d;
	scanf("%d-%d-%d-%c", &a, &b, &c, &d);
	int temp, hh;
	if(d == 'X')
		hh = 10;
	else if(d >= '0' && d <= '9')
		hh = d - '0';
	char str1[4];
	str1[0] = 48 + b / 100; str1[1] = 48 + b / 10 % 10; str1[2] = 48 + b % 10;
	str1[3] = '\0';
	char str2[6];
	str2[0] = 48 + c / 10000;
	str2[1] = 48 + c / 1000 % 10;
	str2[2] = 48 + c / 100 % 10;
	str2[3] = 48 + c / 10 % 10;
	str2[4] = 48 + c % 10;
	str2[5] = '\0';
	temp = a + b / 100 * 2 + b / 10 % 10 * 3 + b % 10 * 4 + c / 10000 * 5 + c / 1000 % 10 * 6 + c / 100 % 10 * 7 + c / 10 % 10 * 8 + c % 10 * 9;
	temp = temp % 11;
	if (temp == hh)
		printf("Right");
	else
	{
		if (temp == 10)
			printf("%d-%s-%s-%c", a, str1, str2, 'X');
		else
			printf("%d-%s-%s-%d", a, str1, str2, temp);
	}
	return 0;
}