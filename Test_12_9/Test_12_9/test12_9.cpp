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
	printf("��������Ҫ�������������\n");
	scanf_s("%d %d",&a,&b);
	printf("������Ҫ��������ͣ�1.�ӷ�  2.������ǰһ������һ����  3.�˷�  4.������ͬ������\n");
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
	printf("ע�⣡��������ֻ��Ϊ����\n");
	printf("������Ϊ��%d\n",c);
	return 0;
}