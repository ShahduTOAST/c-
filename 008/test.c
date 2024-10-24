#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//int main()
//{
//    int i = 0;11
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};
//    for(i=0; i<=12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}

//void div(int x)
//{
//	return x / 2;
//}

int main()
{
	int a = 0, b = 10;
	do            //循环求换多少
	{
		int c = 0;

		c = b % 2;
		b =  (b + c)/ 2;
		a += b;
	} while (b != 0);
	printf("%d\n", a);

	return 0;

}