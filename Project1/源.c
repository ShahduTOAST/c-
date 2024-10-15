#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char input[60] = { 0 };
	
	
	system("shutdown -s -t 60");
	printf("请注意，你的电脑将在两分钟后关机，如果不想关机的话，说“我是猪”");
again:
	scanf("%s", input);

	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
		
	}
	else
	{
		printf("真的吗（笑），再给你一次机会,输吧")
			; goto again;
	}


	return 0;
}