#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void list(int n)
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			k = i*j;
//			printf("%d * %d = %d  ",j,i,k);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	list(n);
//	return 0;
//}
//#include<stdio.h>
//void change(int* x, int* y)
//{
//	int c = 0;
//	c = *x;
//	*x = *y;
//	*y = c;
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf(" ‰»Îa£¨b÷µ\n");
//	scanf("%d %d",&a,&b);
//	printf("a = %d  b = %d\n\n", a, b);
//	change(&a,&b);
//	printf("after a = %d  b = %d\n",a,b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d",&a,&b);
//	printf("a = %d ,b = %d\n\n",a,b);
//	c = a;
//	a = b;
//	b = c;
//	printf("a = %d ,b = %d\n", a, b);
//	return 0;
//}
//#include<stdio.h>
//int LeapYear(int y)
//{
//	if (y % 4 == 0 && y % 100 != 0)
//		return 1;
//	else if (y % 100 == 0 && y % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (LeapYear(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//#include<math.h>
//#include<stdio.h>
//int Judge(int i)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i%j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (Judge(i))
//			printf("%d  ",i);
//	}
//	return 0;
//}
//#include<stdio.h>
//int fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * fun(n + 1);
//}
//int main()
//{
//	int n = 2;
//	int m = fun(n);
//	printf("%d", m);
//	return 0;
//}
//∑«µ›πÈ
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	int n = 0;
//	scanf("%d",&n);
//	if (n <= 2)
//		printf("1\n");
//	else
//	{
//		while (n > 2)
//		{
//			c = a + b;
//			b = a;
//			a = c;
//			n = n - 1;;
//		}
//		printf("%d", c);
//	}
//	return 0;
//}
//#include<stdio.h>
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int i = fib(n);
//	printf("%d", i);
//	return 0;
//}
//#include<stdlib.h>
//
//float calc_1(float n, int k)
//{
//	if (k == 0)
//		return 1;
//	else
//	    return n*calc_1(n, k + 1);
//}
//int calc_2(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else
//		return n*calc_2(n, k - 1);
//}
//int main()
//{
//	float n = 0;
//	int k = 0;
//	printf("n,k\n");
//	scanf("%f %d",&n,&k);
//	if (k < 0)
//	{
//		float ret_1 = 1/calc_1(n, k);
//		printf("%f\n", ret_1);
//	}
//	else
//	{
//		int ret_2 = calc_2((int)n, k);
//		printf("%d\n", ret_2);
//	}
//	return 0;
//}
//int Sumnum(int num)
//{
//	if (num <= 10)
//	{
//		return num;
//	}
//	else
//	{
//		return num % 10 + Sumnum(num / 10);
//	}
//}
//int main()
//{
//	int num = 0;
//	int sum = 0;
//	scanf("%d", &num);
//	sum = Sumnum(num);
//	printf("%d\n", sum);
//	return 0;
//}
//void reverse_string(char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	reverse_string(str + 1);
//	printf("%c ",*str);
//
//}
//
//int main()
//{
//	char* str = "abcdefgh";
//	int i = 0;
//	for (i = 0; i <= 8; i++)
//	{
//		printf("%c ", str[i]);
//	}
//	printf("\n\n");
//	reverse_string(str);
//	printf("\n\n");
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	char* str = "apple";
//	while (*str != '\0')
//	{
//		i++;
//		str++;
//	}
//	printf("%d \n", i);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char* str = "apple";
//	int i = my_strlen(str);
//	printf("%d \n\n", i);
//	return 0;
//}
//int cala(int a)
//{
//	int i = 0;
//	int ret = 1;
//	if (a == 0)
//		return 0;
//	for (i = 1; i <= a; i++)
//	{
//		ret = ret*i;
//	}
//	return ret;
//}
//int cala_2(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n*cala_2(n - 1);
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	if (n == 0)
//		printf("ret = 0 \n");
//	else
//	{
//		int ret = cala_2(n);
//		printf("ret = %d  \n", ret);
//	}
//	return 0;
//}
int count(int n)
{
	if (n > 9)
	{
		count(n / 10);
	}
	n = n % 10;
	printf("%d  ", n);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	count(n);
	return 0;
}