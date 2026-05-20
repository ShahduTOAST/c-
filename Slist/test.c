#define _CRT_SECURE_NO_WARNINGS 
#include"SList.h"

void test01() {
	SLTNode* node01 = (SLTNode*)malloc(sizeof(SLTNode));
	SLTNode* node02 = (SLTNode*)malloc(sizeof(SLTNode));
	SLTNode* node03 = (SLTNode*)malloc(sizeof(SLTNode));
	SLTNode* node04 = (SLTNode*)malloc(sizeof(SLTNode));
	
	node01->data = 1;
	node02->data = 2;
	node03->data = 3;
	node04->data = 4;

	node01->next = node02;
	node02->next = node03;
	node03->next = node04;
	node04->next = NULL;
	SLTNode* phead = node01;
	SLTPrint(phead);
}
void test02() {
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	//SLTPrint(plist);
	//SLTPushFront(&plist, 5);
	//SLTPrint(plist);
	//SLTPushFront(&plist, 6);
	//SLTPrint(plist);
	////SLTPushFront(NULL,12);
	//SLTPopBack(&plist);
	//SLTPrint(plist);
	//SLTPopFront(&plist);
	//SLTPrint(plist);
	
	SLTNode* ret = SLTFind(plist, 2);
	if (ret == NULL) {
		printf("0\n");
	}
	else {
		printf("1\n");
		//printf("%d\n", ret->data);
	}
	SLTInsert(&plist, ret, 314);
	SLTPrint(plist);
	SLTInsertAfter(ret, 159);
	SLTPrint(plist);
	/*ret = SLTFind(plist, 4);
	SLTErase(&plist,ret);*/
	ret = SLTFind(plist, 3);
	/*SLTErase(&plist, ret);
	SLTPrint(plist);*/
	SLTEaserAfter(ret);
	SLTPrint(plist);
	//SListDestroy(&plist);
	SLTDataChange(plist, ret, 9);
	SLTPrint(plist);
}

main()
{
	//test01();
	test02();
	return 0;
}