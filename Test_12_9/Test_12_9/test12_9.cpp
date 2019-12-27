#include<stdio.h>
int sum(int a_1, int b_1)
{
	return a_1 + b_1;
}
int jian(int a_2, int b_2)
{
	return a_2 - b_2;
}
int cheng (int a_3, int b_3)
{
	return a_3 * b_3;
}
int chu(int a_4, int b_4)
{
	return a_4 / b_4;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int i = 0;
	printf("请输入需要计算的两个数字\n");
	scanf_s("%d %d",&a,&b);
	printf("请输入要计算的类型：1.加法  2.减法（前一个减后一个）  3.乘法  4.除法（同减法）\n");
	scanf_s("%d",&i);
	switch (i)
		{
	case 1:c = sum(a, b);
		break;
	case 2:c = jian(a, b);
		break;
	case 3:c = cheng(a, b);
		break;
	case 4:c = chu(a, b);
		break;

	default:
		break;
	}
	printf("注意！！输出结果只能为整数\n");
	printf("计算结果为：%d\n",c);
	return 0;
}