#include"Stack.h"

void test01() {
	ST st;
	STInit(&st);
	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 6);
	StackPush(&st, 4);
	StackPush(&st, 5);
	StackPush(&st, 4);
	StackPush(&st, 4);
	while (!StackEmpty(&st)) {
		int top = StackTop(&st);
		printf("%d ", top);
		StackPop(&st);
	}
	STDestory(&st);
}

//int main() {
//	test01();
//	return 0;
//}


// 获取优先级
int getPriority(char op) {
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

// 计算结果
int calculate(int a, int b, char op) {
    switch (op) {
    case '+': return a + b;
    case '-': return a - b;
    case '*': return a * b;
    case '/': return a / b;
    default: return 0;
    }
}

// 表达式求值
int evalExpression(const char* expr) {
    ST numStack;  // 数字栈
    ST opStack;   // 符号栈
    STInit(&numStack);
    STInit(&opStack);

    int i = 0;
    while (expr[i] != '\0') {
        // 跳过空格
        if (expr[i] == ' ') {
            i++;
            continue;
        }

        // 如果是数字，入数字栈
        if (isdigit(expr[i])) {
            int num = 0;
            while (isdigit(expr[i])) {
                num = num * 10 + (expr[i] - '0');
                i++;
            }
            StackPush(&numStack, num);
        }
        // 如果是运算符
        else if (expr[i] == '+' || expr[i] == '-' || expr[i] == '*' || expr[i] == '/') {
            // 如果符号栈不为空，且栈顶运算符优先级 >= 当前运算符优先级
            if (!StackEmpty(&opStack) && getPriority(StackTop(&opStack)) >= getPriority(expr[i])) {
                // 先计算栈顶的运算
                char op = StackTop(&opStack);
                StackPop(&opStack);
                int b = StackTop(&numStack);
                StackPop(&numStack);
                int a = StackTop(&numStack);
                StackPop(&numStack);
                int result = calculate(a, b, op);
                StackPush(&numStack, result);
            }
            // 当前运算符入栈
            StackPush(&opStack, expr[i]);
            i++;
        }
        else {
            printf("非法字符: %c\n", expr[i]);
            return 0;
        }
    }

    // 处理剩下的运算符
    while (!StackEmpty(&opStack)) {
        char op = StackTop(&opStack);
        StackPop(&opStack);
        int b = StackTop(&numStack);
        StackPop(&numStack);
        int a = StackTop(&numStack);
        StackPop(&numStack);
        int result = calculate(a, b, op);
        StackPush(&numStack, result);
    }

    int finalResult = StackTop(&numStack);

    // 销毁栈
    STDestory(&numStack);
    STDestory(&opStack);

    return finalResult;
}

// 测试函数1：基本栈操作
void testStack() {
    printf("========== 栈的基本操作测试 ==========\n");

    ST st;
    STInit(&st);

    printf("入栈: 10, 20, 30, 40\n");
    StackPush(&st, 10);
    StackPush(&st, 20);
    StackPush(&st, 30);
    StackPush(&st, 40);

    printf("栈顶元素: %d\n", StackTop(&st));

    printf("出栈顺序: ");
    while (!StackEmpty(&st)) {
        printf("%d ", StackTop(&st));
        StackPop(&st);
    }
    printf("\n");

    printf("栈是否为空: %s\n", StackEmpty(&st) ? "是" : "否");

    STDestory(&st);
    printf("栈已销毁\n");
}

// 测试函数2：表达式求值
void testExpression() {
    printf("\n========== 表达式求值测试 ==========\n");
    printf("支持运算符: + - * /\n");
    printf("例如: 3+5*2 = 13\n\n");

    // 预设几个测试用例
    const char* tests[] = {
        "3+5*2",
        "10-6/2",
        "2*3+4*5",
        "100/4-8",
        "1+2+3+4"
    };

    for (int i = 0; i < 5; i++) {
        int result = evalExpression(tests[i]);
        printf("%s = %d\n", tests[i], result);
    }
}

// 测试函数3：交互式输入
void testInteractive() {
    printf("\n========== 交互式表达式求值 ==========\n");
    printf("支持运算符: + - * /\n");
    printf("输入 'q' 退出\n\n");

    char input[256];
    while (1) {
        printf("请输入表达式: ");
        fgets(input, sizeof(input), stdin);

        // 去除换行符
        int len = strlen(input);
        if (len > 0 && input[len - 1] == '\n') {
            input[len - 1] = '\0';
        }

        // 退出判断
        if (strcmp(input, "q") == 0 || strcmp(input, "Q") == 0) {
            printf("退出程序\n");
            break;
        }

        // 空输入跳过
        if (strlen(input) == 0) {
            continue;
        }

        int result = evalExpression(input);
        printf("%s = %d\n", input, result);
    }
}

// 主函数
int main() {
    // 测试栈的基本操作
    testStack();

    // 测试表达式求值
    testExpression();

    // 交互式求值
    testInteractive();

    return 0;
}