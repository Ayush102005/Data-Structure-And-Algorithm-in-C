#include <stdio.h>
#include <stdlib.h>

int main() {

    int* p = (int*) malloc(sizeof(int));
    if (p == NULL) {
        printf("Memory not allocated.\n");
        return -1;
    }
    *p = 10;
    printf("Value of allocated memory using malloc: %d\n", *p);
    int* arr = (int*) calloc(5, sizeof(int));
    if (arr == NULL) {
        printf("Memory not allocated.\n");
        return -1;
    }
    for (int i = 0; i < 5; i++) {
        arr[i] = i * 2;
    }
    printf("Values of allocated memory using calloc: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    arr = (int*) realloc(arr, 10 * sizeof(int));
    if (arr == NULL) {
        printf("Memory not allocated.\n");
        return -1;
    }
    for (int i = 5; i < 10; i++) {
        arr[i] = i * 2;
    }
    printf("Values of reallocated memory using realloc: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(p);
    free(arr);

    return 0;
}