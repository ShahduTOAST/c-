#include"Queue.h"
void QueueInit(Queue* pq) {
	assert(pq);
	pq->phead = pq->ptail = NULL;
}

void QueueDestory(Queue* pq) {
	assert(pq);
	QNode* pcur = pq->phead;
	while (pcur) {
		QNode* next = pcur->next;
		free(pcur);
		pcur = next;
	}
	pq->phead = pq->ptail = NULL;
}

void QueuePush(Queue* pq, QDataType x) {
	assert(pq);
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL) {
		perror("maloc failed");
		exit(1);
	}
	newnode->data = x;
	newnode->next = NULL; 

	if (pq->phead == NULL) {
		pq->phead = pq->ptail = newnode;
	}else {
		pq->ptail->next = newnode;
		pq->ptail = pq->ptail->next;
	}
	}

bool QueueEmpty(Queue* pq) {
	assert(pq);
	return pq->phead == NULL;
}

void QueuePop(Queue* pq){
	QNode* pnext = pq->phead->next;
	free(pq->phead);
	pq->phead = pnext;
}

QDataType QueueFront(Queue* pq) {
	assert(!QueueEmpty(pq));
	return pq->phead->data;
}

QDataType QueueBack(Queue* pq) {
	assert(!QueueEmpty(pq));
	return pq->ptail->data;
}

int QueueSize(Queue* pq) {
	assert(pq);
	int num = 0;
	QNode* pcur = pq->phead;
	while (pcur) {
		QNode* next = pcur->next;
		num++;
		pcur = next;
	}
	return num;
}