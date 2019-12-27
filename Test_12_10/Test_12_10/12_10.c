#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for ( i = 0; i <=100; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d ",i);
//
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int a = 1;
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//		a = a*i;
//	printf("%d\n",a);
//	return 0;
//}
int main()
{
	int i = 0;
	int j = 0;
	int a = 1;
	int sum = 0;
	for (i = 1; i <= 3; i++)
	{
		sum = 1;
		for (j = 1; j <= i; j++)
		{
			a = a * i;
		}
		sum = sum + a;
	}
	printf("%d\n",sum);
	return 0;
}