#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    for(int i = 0; i < 5; i++) {
        printf("Address of arr[%d]: %p\n", i, &arr[i]);
        printf("Value of arr[%d]: %d\n", i, arr[i]);
    }

    return 0;
}