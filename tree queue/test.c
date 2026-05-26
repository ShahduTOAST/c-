#include"tree.h"

void test01() {
	char* a = "ABD##E#H##CF##G##";
	int n = strlen(a) - 1, b = 0;
	int* pi = &b;
	//创建二叉树
	printf("创建一个二叉树，前序输入为ABD##E#H##CF##G##（#为空）");
	BTNode* root = BinaryTreeCreate(a, n, &b);

	printf("%d ", BinaryTreeLeafSize(root));
	printf("%d ", BinaryTreeLevelKSize(root, 5));
	printf("%d ", BinaryTreeDepth(root));
	BinaryTreeLevelOrder(root);
}
void test02() {
	char* a = "ABD##E#H##CF##G##";
	int n = strlen(a) - 1, b = 0;
	int* pi = &b;
	//创建二叉树
	printf("创建一个二叉树，前序输入为 ABD##E#H##CF##G## （#为空）\n");
	BTNode* root = BinaryTreeCreate(a, n, &b);
    // 输出三种遍历序列
    printf("前序遍历: ");
    BinaryTreePrevOrder(root);
    printf("\n");

    printf("中序遍历: ");
    BinaryTreeInOrder(root);
    printf("\n");

    printf("后序遍历: ");
    BinaryTreePostOrder(root);
    printf("\n");

    // 销毁树（释放内存）
    BinaryTreeDestory(&root);

    return 0;
}
int main() {
	//test01(); 
	test02();
	return 0;
}