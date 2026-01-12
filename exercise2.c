#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	long long year;
	printf("please enter the 'year'\n");
	scanf("%lld",&year);

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		printf("%lld is a leap year.", year);

	else
		printf("%lld is not a leap year", year);

	return 0;
}