#include"tree.h"
#include"Queue.h"

BTNode* BuyNode(BTDataType x) {
	BTNode* pos = (BTNode*)malloc(sizeof(BTNode));
	if (pos == NULL) {
		perror("malloc failed!");
		exit(1);
	}
	pos->left = pos->right = NULL;
	pos->_data = x;
	return pos;
}

BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi) {
	if (*pi >= n) {
		return NULL;
	}
	if (a[*pi] == '#') {
		(*pi)++;
		return NULL;
	}
	BTNode* node = BuyNode(a[(*pi)++]);
	node->left = BinaryTreeCreate(a, n, pi);
	node->right = BinaryTreeCreate(a, n, pi);
	return node;
}

void BinaryTreeDestory(BTNode** root) {
	if ((*root) == NULL) {
		return;
	}
	BinaryTreeDestory(&(*root)->left);
	BinaryTreeDestory(&(*root)->right);
	free(*root);
	(*root) = NULL;
}
// 二叉树节点个数
int BinaryTreeSize(BTNode* root) {
	if (root == NULL) {
		return 0;
	}
	return 1 + BinaryTreeSize(root->left) + BinaryTreeSize(root->right);
}
// 二叉树叶子节点个数
int BinaryTreeLeafSize(BTNode* root) {
	if (root == NULL) {
		return 0;
	}
	if (root->left == NULL && root->right == NULL) {
		return 1;
	}
	return BinaryTreeLeafSize(root->left) + BinaryTreeLeafSize(root->right);
}
// 二叉树第k层节点个数
int BinaryTreeLevelKSize(BTNode* root, int k) {
	if (root == NULL) {
		return 0;
	}
	if (k == 1) {
		return 1;
	}
	return BinaryTreeLevelKSize(root->left, k - 1) + BinaryTreeLevelKSize(root->right, k - 1);
}
// 二叉树查找值为x的节点
BTNode* BinaryTreeFind(BTNode* root, BTDataType x) {
	if (root == NULL) {
		return NULL;
	}
	if (root->_data == x) {
		return root;
	}
	BTNode* left = BinaryTreeFind(root->left, x);
	if (left != NULL) {
		return left;
	}
	BTNode* right = BinaryTreeFind(root->right, x);
	if (right != NULL) {
		return right;
	}
	return NULL;
}
//求二叉树深度
int BinaryTreeDepth(BTNode* root) {
	if (root == NULL) {
		return 0;
	}
	int left = BinaryTreeDepth(root->left);
	int right = BinaryTreeDepth(root->right);
	return 1 + (left > right ? left : right);
}
// 层序遍历  队列
void BinaryTreeLevelOrder(BTNode* root) {
	Queue p;
	QueueInit(&p);
	QueuePush(&p, root);
	while (!QueueEmpty(&p)) {
		BTNode* top = QueueFront(&p);
		QueuePop(&p);
		if (top->left)
			QueuePush(&p, top->left);
		if (top->right)
			QueuePush(&p, top->right);
		printf("%c ", top->_data);
	}
	QueueDestory(&p);
}
// 二叉树前序遍历 ,根左右
void BinaryTreePrevOrder(BTNode* root) {
	if (root == NULL) {
		//printf("NULL ");
		return;
	}
	printf("%c ", root->_data);
	BinaryTreePrevOrder(root->left);
	BinaryTreePrevOrder(root->right);
}
// 二叉树中序遍历
void BinaryTreeInOrder(BTNode* root) {
	if (root == NULL) {
		//printf("NULL");
		return;
	}
	BinaryTreeInOrder(root->left);
	printf("%c ", root->_data);
	BinaryTreeInOrder(root->right);
}

// 二叉树后序遍历
void BinaryTreePostOrder(BTNode* root) {
	if (root == NULL) {
		//printf("NULL ");
		return;
	}
	BinaryTreePostOrder(root->left);
	BinaryTreePostOrder(root->right);
	printf("%c ", root->_data);
}
int BinaryTreeComplete(BTNode* root) {
	Queue pq;
	QueueInit(&pq);
	QueuePush(&pq,root);
	while (!QueueEmpty(&pq)) {
		BTNode* top = QueueFront(&pq);
		QueuePop(&pq);
		if (top == NULL)
			break;
		if (top->left)
			QueuePush(&pq,&top->left);
		if (top->right)
			QueuePush(&pq,top->right);
	}
	while (!QueueEmpty(&pq)) {
		if (QueueFront(&pq) != NULL) {
			QueueDestory(&pq);
			return 0;
		}
		QueuePop(&pq);
	}
	QueueDestory(&pq);
	return 1;
}