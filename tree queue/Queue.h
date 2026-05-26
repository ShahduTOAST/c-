#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
//队列的定义
//typedef int QDataType;
typedef struct BinaryTreeNode* QDataType;
typedef struct QListNode {
	struct QListNode* next;
	QDataType data;
}QNode;
//队列结构
typedef struct Queue {
	QNode* phead;
	QNode* ptail;
}Queue;
//初始化
void QueueInit(Queue* pq);
//销毁
void QueueDestory(Queue* pq);
//队尾插入数据
void QueuePush(Queue* pq, QDataType x);
//对头出队列
void QueuePop(Queue* pq);
//获取队头数据
QDataType QueueFront(Queue* pq);
//获取队尾数据
QDataType QueueBack(Queue* pq);
//获取队列元素个数
int QueueSize(Queue* pq);

bool QueueEmpty(Queue* pq);