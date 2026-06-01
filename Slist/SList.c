
#define _CRT_SECURE_NO_WARNINGS 
#include"SLIst.h"
void SLTPrint(SLTNode* phead) 
{
	SLTNode* pcur = phead;
	while (pcur!=NULL) {
		printf("%d -> ",pcur->data);
		pcur = pcur->next;
	}
	printf("NULL\n");
}

SLTNode* SLTBuyNode(SLTDataType x) {
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL) {
		printf("malloc error");
		exit(1);
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

void SLTPushBack(SLTNode** pphead, SLTDataType x) {
	assert(pphead);
	SLTNode* newnode = SLTBuyNode(x);
	if (*pphead == NULL) {
		*pphead = newnode;
	} 
	else {
		SLTNode* ptail = *pphead;
		while (ptail->next) {
			ptail = ptail->next;
		}
		ptail->next = newnode;
	}
}		

void SLTPushFront(SLTNode** pphead, SLTDataType x) {
	assert(pphead);
	SLTNode* newnode = SLTBuyNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}

void SLTPopBack(SLTNode** pphead) {
	assert(pphead && *pphead);
	if ((*pphead)->next == NULL) {
		*pphead = NULL;
	}else{
		SLTNode* ptail = *pphead, * prev = NULL;
		while (ptail->next) {
			prev = ptail;
			ptail = ptail->next;
		}
		prev->next = NULL;
		free(ptail);
		ptail = NULL;
	}
}

void SLTPopFront(SLTNode** pphead) {
	assert(pphead && *pphead);
	SLTNode* next = *pphead;
	*pphead = next->next;
	free(next);
	next = NULL;
}

SLTNode* SLTFind(SLTNode* phead, SLTDataType x) {
	assert(phead);
	SLTNode* pcur = phead;
	while (pcur && (pcur->data != x)) {
		pcur = pcur->next;
	}
	return pcur;
} 

void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x) {
	assert(pphead && pos);
	if (pos == *pphead) {
		SLTPushFront(*pphead, x);
	}else{
		SLTNode* prev = *pphead;
		while (prev->next != pos) {
			prev = prev->next;
		}
		SLTNode* newnode = SLTBuyNode(x);
		newnode->next = prev->next;
		prev->next = newnode;
		}
	}

void SLTInsertAfter(SLTNode* pos, SLTDataType x) {
	assert(pos);
	SLTNode* newnode = SLTBuyNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

void SLTErase(SLTNode** pphead, SLTNode* pos) {
	assert(pphead && pos);
	if (*pphead == pos) {
		*pphead = (*pphead)->next;
		free(pos);
		pos = NULL;
	}
	else {
		SLTNode* pcur = *pphead;
		while (pcur->next != pos) {
			pcur = pcur->next;
		}
		pcur->next = pos->next;
		free(pos);
		pos = NULL;
	}
}

void SLTEaserAfter(SLTNode* pos) {
	assert(pos && pos->next);
	SLTNode* del = pos->next;
	pos->next = pos->next->next;
	free(del);
	del = NULL;
}

void SListDestroy(SLTNode** pphead) {
	assert(pphead);
	SLTNode* pcur = *pphead;
	while (pcur) {
		SLTNode* next = pcur->next;
		free(pcur);
		pcur = next;
	}
	*pphead = NULL;
}

void SLTDataChange(SLTNode* phead, SLTNode* pos, SLTDataType x) {
	assert(phead && pos);
	SLTNode* pcur = phead;
	while (pcur != pos) {
		pcur = pcur->next;
	}
	pcur->data = x;
}
