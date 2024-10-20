#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<math.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		n = i % 3;
//		if (!n)
//		{
//			printf("%d\n", i);
//			
//		}
//
//	}
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if(a > b && b > c)
//		printf("%d  %d  %d", a, b, c);
//	else if(a>b && c>b && a > c)
//		printf("%d  %d  %d", a, c, b);
//	else if(b > a && a > c)
//		printf("%d  %d  %d", b, a, c);
//	else if(b > a &&c > a && b > a)
//		printf("%d  %d  %d", b, c, a);
//	else if(c > a && a > b)
//		printf("%d  %d  %d", c, b, a);
//	else 
//		printf("%d  %d  %d", c, a, b);
//
//	return 0;
//}

//int main()
//{
//	int i = 0, j = 1,n = 0;
//	
//	for (i = 1; i < 10; i++)
//	{
//		while (j <= i)
//		{
//			n = i * j;
//			printf("%d * %d =%d\t", i, j, n);
//			j++;
//		}
//		printf("\n");
//		j = 1;
//	}
//	return 0;
//}

//int main()
//{
//	int  a = 1;
//	float sum = 0;
//	for (a = 1; a < 51; a=a+2)
//	{
//		sum = (1.0 / a) - (1.0 / (a + 1));
//		sum += sum;
//	}
//	printf("sum = %f\n", sum);
//	return 0;
//
//}


//int main()
//{
//	float sum = 0;
//	int a = 0;
//	a = 1;
//	sum = (1/2.0);
//	printf("%f",sum);
//	return 0;

//}


int main()
{
	int i = 0,n = 0;
	for (i = 9; i <= 100; i++)
	{
		n = i / 9;
		while (i / 9)
		{
			n = (i / 10) / 9;
			n += n;
		}
		n += n;
		
	}
	printf("%d\n",n);
	return 0;
	
}