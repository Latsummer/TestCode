#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d  ",i);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	while (i < 100)
//	{
//		i = i + 3;
//		if (100 <= i)
//			break;
//		printf("%d  ", i);
//	}
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d  ",i);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first ");
//		case 1:
//			printf("second ");
//			break;
//		default: printf("hello ");
//		}
//	case 2:
//		printf(" third");
//	}
//	return 0;
//}
//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1: b = 30;
//	case 2: b = 20;
//	case 3: b = 16;
//	default: b = 0;
//	}
//	return b;
//}
//int main()
//{
//	int i = func(1);
//	printf("%d  \n",i);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 100;
//	int j = 100;
//	while (i <= 200)
//	{
//		j = 2;
//		while (j < i)
//		{
//			if (i % j == 0)
//				break;
//			j++;
//			if (j>=i)
//			printf("%d  ", i);
//		
//		}
//		i++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1000;
//	while (i <= 2000)
//	{
//		if (i % 4 == 0)
//			printf("%d  ", i);
//		
//			i++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 1;
//	int arr[] = { 0 };
//	int i_1 = 0;
//	printf("输入两数字：>\n");
//	scanf("%d %d",&a,&b);
//	while(a >= i)
//	{
//		if (a % i == 0)
//		{
//			if (b % i == 0)
//			{
//				arr[i_1] = i;
//				i_1++;
//			}
//		}
//		i++;
//	}
//	printf("最大公约数为：%d \n",arr[i_1 - 1]);
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int a = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			a = i * j;
//			printf("%d*%d = %d   ",i,j,a);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int t = 0;
//	printf("请输入十个整数：>\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d",&arr[i]);
//	for (j = 0; j < 10; j++)
//	{
//	   for (i = 0; i < 10 - j; i++)
//	    {
//			if (arr[i] > arr[i + 1])
//				continue;
//			else
//			{
//				t = arr[i + 1];
//				arr[i + 1] = arr[i];
//				arr[i] = t;
//		    }
//	     }
//	}
//	printf("最大值为 %d \n",arr[0]);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	float i = 0;
//	float sum = 0;
//	int j = 0;
//	for (i = 1.0; i <= 100; i++)
//	{
//		j++; 
//		if (j % 2 == 0)
//			sum = sum - 1 / i;
//		else
//			sum = sum + 1 / i;
//			
//	}
//	printf("%f\n",sum);
//}
#include<stdio.h>
int main()
{
	int i = 1;
	int j = 0;
	for (i = 1; i <= 100; i++)
	{
		if ((i + 1) % 10 == 0 )
			j++;
		if ((i + 1) % 100 == 0)
			j++;

	}
	printf("%d 个",j);
}