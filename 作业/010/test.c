#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//int main()
//{
//	int arr[2] = { 1,2 };
//	int a = 0;
//	int* p1 = &arr[0];
//	int* p2 = &arr[2];
//	printf("%d\n", arr[0]);
//	printf("%d\n", arr[1]);
//	printf("%p\n", p1);
//	printf("%p\n", p2);
//
//	int c = 0;//中间变量，交换
//	p1 = p1 + 1;
//	p2 = p2 - 1;
//	printf("%d\n", arr[0]);
//	printf("%d\n", arr[1]);
//	return 0;
//}
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1000; a <= 2000; a++)
//	{
//		if (((a % 4 == 0) && (a % 100 != 0)) || (a % 400 == 0))
//		{
//			printf("%d\n", a);
//		}
//	}
//	return 0;
//}

int main()
{
	int a = 0;
	int b = 2;
	int* const p = &a;
	printf("%d\n",*p);
	*p = b;
	printf("%d\n", *p);


	return 0;
}