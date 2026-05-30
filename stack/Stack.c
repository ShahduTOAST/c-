#include"Stack.h"

void STInit(ST* ps) {
	ps->arr = NULL;
	ps->top = ps->capacity = 0;
}

void STDestory(ST* ps) {
	if(ps->arr)
		free(ps->arr);
	ps->arr = NULL;
	ps->top = ps->capacity = 0;
}

bool StackEmpty(ST* ps) {
	assert(ps);
	return ps->top == 0; 
}

void StackPush(ST* ps, STDataType x) {
	assert(ps);
	if (ps->top == ps->capacity) {
		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		STDataType* pos = (STDataType*)realloc(ps->arr, newCapacity * sizeof(STDataType));
		if(!pos) {
			printf("fail");
			exit(1);
		}
		ps->arr = pos;
		ps->capacity = newCapacity;
	}
	ps->arr[ps->top++] = x;
}

void StackPop(ST* ps) {
	assert(!StackEmpty(ps));
	--ps->top;
}

STDataType StackTop(ST* ps) {
	assert(!StackEmpty(ps));
	return ps->arr[ps->top - 1];
}

