#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	int n = 0, total = 0, answer;


	printf(" square of the sum and the sum of the squares of the first N natural numbers\n");
	printf("----------------------------------------------------------------------------\n");

	printf("please enter your 'n' number ;");
	scanf("%d", &n);

	for (int i = 0; i <= n; i++)
	{
		total = total + i;

	}
	answer = pow(total, 2);

	total = 0;


	for (int i = 0; i <= n; i++)
	{
		total = pow(i, 2) + total;
		
	}
	answer = answer - total;
	printf("the answer you need is;%d", answer);
	




























	return 0;
}