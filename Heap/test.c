#include"Heap.h"
#include<time.h>
void test01() {
	HP hp;
	HPInit(&hp);
	HPPush(&hp, 1);
	HPPush(&hp, 5);
	HPPush(&hp, 2);
	HPPush(&hp, 4);
	HPPush(&hp, 3);
	HPPop(&hp);
	HPSize(&hp);
	printf("%d\n",HPTop(&hp));
	HPDestory(&hp);
}
void test02() {
	int arr[10] = { 5,3,7,8,1,2,4,6,9,10 };

	HeapSort(arr, sizeof(arr) / sizeof(arr[0]));
}
void CreateNDate()
{
	// 造数据
	int n = 100000;
	srand(time(0));
	const char* file = "data.txt";
	FILE* fin = fopen(file, "w");
	if (fin == NULL)
	{
		perror("fopen error");
		return;
	}

	for (size_t i = 0; i < n; ++i)
	{
		int x = rand() % 1000000;
		fprintf(fin, "%d\n", x);
	}

	fclose(fin);
}
void Topk(int k) {
	const char* file = "data.txt";
	FILE* fout = fopen(file, "r");
	if (fout == NULL) {
		perror("failed");
		exit(1);
	}
		//前k个建堆，循环结束找到最大的k个
		int* minHeap = (int*)malloc(sizeof(int) * k);
		if (minHeap == NULL) {
			perror("malloc failed");
			exit(2);
		}
		for (int i = 0; i < k; i++) {
			fscanf(fout, "%d", &minHeap[i]);
		}
		//建堆向下调整
		for (int i = (k - 2) / 2; i >= 0; i--) {
			AdjustDown(minHeap, i, k);
		}
		//剩下的数据
		int x = 0;
		while (fscanf(fout, "%d", &x) != EOF) {
			if (minHeap[0] < x) {
				minHeap[0] = x;
				AdjustDown(minHeap, 0, k);
			}
		}

		int i = 0;
		while (i < 5) {
			printf("%d\n", minHeap[i]);
			i++;
		}
		fclose(fout);
		fout = NULL;
	
}
int main() {
	//test01();
	//test02();
	//CreateNDate();
	int k = 5;
	Topk(k);
	return 0;
}

