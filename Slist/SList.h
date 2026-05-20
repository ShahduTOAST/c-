#define _CRT_SECURE_NO_WARNINGS 
#include<assert.h>
#include<stdio.h>
#include<stdlib.h>
typedef int SLTDataType;
typedef struct SListNode {
	SLTDataType data;
	struct SListNode* next;
}SLTNode;
//打印
void SLTPrint(SLTNode* phead);
//尾插
void SLTPushBack(SLTNode** pphead, SLTDataType x);
//头插
void SLTPushFront(SLTNode** pphead, SLTDataType x);
//尾删
void SLTPopBack(SLTNode** pphead);
//头删
void SLTPopFront(SLTNode** pphead);
//查找
SLTNode* SLTFind(SLTNode* phead,SLTDataType x);
// 在指定位置前插入
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);
// 在指定位置之后插入
void SLTInsertAfter(SLTNode* pos, SLTDataType x);
//删除pos节点
void SLTErase(SLTNode** pphead, SLTNode* pos);
//删除pos后节点
void SLTEaserAfter(SLTNode* pos);
//销毁链表
void SListDestroy(SLTNode** pphead);
//更改数据
void SLTDataChange(SLTNode* phead, SLTNode* pos, SLTDataType x);