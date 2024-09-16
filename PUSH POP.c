#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<string.h>
#define MAX 100
int stack[MAX];
int top = -1;
void push(int x) {
    if (top == MAX - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = x;
}
int pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        exit(1);
    }
    return stack[top--];
}
int evaluatePostfix(char* exp) {
    int i;
    for (i = 0;exp[i] != '\0'; i++) {
        if (isdigit(exp[i])) {
            push(exp[i] - '0');
        }
        else {
            int val1 = pop();
            int val2 = pop();
            
            switch (exp[i]) {
                case '+': push(val2 + val1); break;
                case '-': push(val2 - val1); break;
                case '*': push(val2 * val1); break;
                case '/': push(val2 / val1); break;
            }
        }
    }
    return pop();
}

int main() {
    char exp[20];
    printf("Enter a postfix expression: ");
    scanf("%s",&exp);
    printf("Postfix Expression: %s\n", exp);
    printf("Result of evaluation: %d\n", evaluatePostfix(exp));
    return 0;
}