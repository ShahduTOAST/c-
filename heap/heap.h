#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<assert.h>
typedef int HPDataType;
typedef struct HPDataType {
	HPDataType* arr;
	int size;
	int capacity;
}HP;
//初始化
void HPInit(HP* php);
// 堆的销毁
void HPDestory(HP* hp);
// 堆的插入
void HPPush(HP* hp, HPDataType x);
// 堆的删除
void HPPop(HP* hp);
// 取堆顶的数据
HPDataType HPTop(HP* hp);
// 堆的数据个数
int HPSize(HP* hp);
// 堆的判空
bool HPEmpty(HP* hp);

void AdjustUp(HPDataType* arr, int child);

void AdjustDown(HPDataType* arr, int parent, int n);

void swap(int* x, int* y);

void HeapSort(int* arr, int x);
