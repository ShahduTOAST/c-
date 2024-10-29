#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//int main()
//{
//	int i = 0, j = 0;
//	int arr[9] = { 1,2,3,4,5,4,3,2,1 };
//
//	for (i = 0; i < 9; i++)
//	{
//		j = 0;
//		int c = 1;
//		for (j = 0; j < 9; j++)
//		{
//			if (i == j)
//			{
//
//			}
//			else if (i != j)
//			{
//				if (arr[i] == arr[j])
//				{
//					c = 0;
//				}
//			}
//		}
//		if (c == 1)
//		{
//			printf("%d\n", arr[i]);
//		}
//	}
//	return 0;
//}
int main()
{
	int a = 3, b = 5;

	printf("a = %d b = %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a = %d b = %d", a, b);
}