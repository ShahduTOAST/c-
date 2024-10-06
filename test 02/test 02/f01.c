//#define _crt_secure_no_warnings 
//#include<stdio.h>
//
//#define MIN 122
//#define STR "shahdu"
//int main()
//{
//	printf("%d\n", MIN);
//	printf("%s\n", STR);
//	return 0;
//}  
#include<stdio.h>         //能用这个
//#include<string.h>      //没哈用，不知道为啥
int main()
{

	char arr0[8] = "asdfasf"; //8
	char arr1[] = { 'a','d','\0'};     //'\0'这个是当作字符,0是直接当作数字,字节应该是相同的
	int len = strlen("asdd");

	//printf("%s\n", arr0);
	//printf("%s\n", arr1);
	printf("%d\n", len);
	printf("%d\n", strlen(arr0));
	printf("%d\n", strlen(arr1));
	printf("\a");
	

	return 0;
}
/*
int main()
{
	printf(" % s\n", "(? ? )");

		return 0;
}*/

 