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
#include<stdio.h>         //�������
//#include<string.h>      //û���ã���֪��Ϊɶ
int main()
{

	char arr0[8] = "asdfasf"; //8
	char arr1[] = { 'a','d','\0'};     //'\0'����ǵ����ַ�,0��ֱ�ӵ�������,�ֽ�Ӧ������ͬ��
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

 