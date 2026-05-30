#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
#include<ctype.h>   // 添加这个，用于 isdigit 函数
#include<string.h> 
typedef int STDataType;
typedef struct Stack {
	STDataType* arr;
	int top;
	int capacity;//容量大小
}ST;

//初始化
void STInit(ST* ps);
//销毁
void STDestory(ST* ps);
//判空
bool StackEmpty(ST* ps);
//入栈
void StackPush(ST* ps, STDataType x);
//出栈 
void StackPop(ST* ps);
//取栈顶元素
STDataType StackTop(ST* ps);
