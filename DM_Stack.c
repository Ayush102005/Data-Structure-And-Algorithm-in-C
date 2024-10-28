#include <stdio.h>
#include <stdlib.h>
int* arr; 
int capacity;
int top; 

void initStack(int initialSize) {
    arr = (int*) malloc(initialSize * sizeof(int));
    capacity = initialSize;
    top = -1;
}

void push(int element) {
    if (top == capacity - 1) {
        capacity *= 2;
        int* newArr = (int*) malloc(capacity * sizeof(int));
        for (int i = 0; i < top + 1; i++) {
            newArr[i] = arr[i];
        }
        free(arr);
        arr = newArr;
    }
    arr[++top] = element;
}

int pop() {
    if (top == -1) {
        printf("Stack is empty\n");
        exit(1);
    }
    int element = arr[top--];
    if (top < capacity / 2) {
        // resize array
        capacity /= 2;
        int* newArr = (int*) malloc(capacity * sizeof(int));
        for (int i = 0; i < top + 1; i++) {
            newArr[i] = arr[i];
        }
        free(arr);
        arr = newArr;
    }
    return element;
}

int peek() {
    if (top == -1) {
        printf("Stack is empty\n");
        exit(1);
    }
    return arr[top];
}

int isEmpty() {
    return top == -1;
}

void displayStack() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Remaining elements in the stack: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int initialSize;
    printf("Enter the initial size of the stack: ");
    scanf("%d", &initialSize);
    initStack(initialSize);
    push(1);
    push(2);
    push(3);
    printf("Top element: %d\n", peek());
    int poppedElement = pop();
    printf("Popped element: %d\n", poppedElement);
    displayStack();
    return 0;
}