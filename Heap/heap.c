#include"Heap.h"
void HPInit(HP* php) {
	assert(php);
	php->arr = NULL;
	php->capacity = php->size = 0;
}
void HPDestory(HP* hp) {
	assert(hp);
	if (hp->arr) {
		free(hp->arr);
		hp->arr = NULL;
		hp->capacity = hp->size = 0;
	}
}

void HPPush(HP* hp, HPDataType x) {
	assert(hp);
	if (hp->capacity == hp->size) {
		int newcapacity = hp->capacity == 0 ? 4 : 2*hp->capacity;
		HPDataType* tmp = (HPDataType*)realloc(hp->arr, newcapacity * sizeof(HPDataType));
		if (tmp == NULL) {
			perror("realloc failed");
			exit(1);
		}
		hp->arr = tmp;
		hp->capacity = newcapacity;
	 }
	hp->arr[hp->size] = x;
	AdjustUp(hp->arr, hp->size);
	hp->size++;
}

void swap(int* x, int* y){
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
///////////////////////目前为小堆/////////////////////////////////////////////////////////
//向长调整
void AdjustUp(HPDataType* arr, int child) {
	int parent = (child - 1) / 2;
	while (child>0) {
		if (arr[child] < arr[parent]) {
			swap(&arr[child], &arr[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else {
			break;
		}
	}
}

//向下调整
void AdjustDown(HPDataType* arr, int parent, int n) {
	int child = parent * 2 + 1;
	while (child < n) {
		if ((child+1) < n && arr[child] > arr[child+1]) {
			child++;
		}
		if (arr[child] < arr[parent]) {
			swap(&arr[child], &arr[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else {
			break;
		}
	}
}

void HPPop(HP* hp) {
	assert(!HPEmpty(hp));
	swap(&hp->arr[0], &hp->arr[hp->size - 1]);
	--hp->size;
	//调整
	AdjustDown(hp->arr, 0, hp->size);
}

bool HPEmpty(HP* hp) {
	assert(hp);
	return hp->size == 0;
}

int HPSize(HP* hp) {
	assert(hp);
	return hp->size;
}

HPDataType HPTop(HP* hp) {
	assert(!HPEmpty(hp));
	return hp->arr[0];
}

//这个代码里面没有更改HPdatatype,后续需要的话自行修改
void HeapSort(int* arr, int x) {
	HP hp;
	HPInit(&hp);
	//压入栈
	for (int i = 0; i < x; i++) {
		HPPush(&hp ,arr[i]);
	}
	//替换
	int i = 0;
	while (!HPEmpty(&hp)) {
		int top = HPTop(&hp);
		arr[i++] = top;
		HPPop(&hp);
	}
	//销毁
	HPDestory(&hp);
}