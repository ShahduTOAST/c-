#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char input[60] = { 0 };
	
	
	system("shutdown -s -t 60");
	printf("��ע�⣬��ĵ��Խ��������Ӻ�ػ����������ػ��Ļ���˵��������");
again:
	scanf("%s", input);

	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
		
	}
	else
	{
		printf("�����Ц�����ٸ���һ�λ���,���")
			; goto again;
	}


	return 0;
}