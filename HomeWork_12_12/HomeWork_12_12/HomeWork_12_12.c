#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//              0  1  2  3  4  5  6  7  8  9  10
	int left = 0;
	int num = sizeof(arr) / sizeof(arr[0]);
	int right = num - 1;
	int mid = 0;
	int a = 0;
	printf("������arr[10] = {1,2,3,4,5,6,7,8,9,10}\n");
	printf("������Ҫ�������ֵ��±꣺>   ");
	scanf("%d", &a);
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] > a)
			right = mid - 1;
		else if (arr[mid] < a)
			left = mid + 1;
		else
		{
			printf("�ҵ��ˣ����� %d ���±��� %d \n", a, mid);
			break;
		}
	}
	if (left>right)
		printf("δ�ҵ��������±꣬����ȷ�������֣�\n");
	
	return 0;
}