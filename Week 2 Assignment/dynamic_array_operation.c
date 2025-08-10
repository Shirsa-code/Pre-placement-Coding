//Dynamic Array Operation

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int capacity = 2;  
    int size = 0;      
    int i;
    arr = (int *)malloc(capacity * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for (i = 0; i < 5; i++) {
        if (size == capacity) {
            capacity *= 2;
            arr = (int *)realloc(arr, capacity * sizeof(int));
            if (arr == NULL) {
                printf("Memory reallocation failed!\n");
                return 1;
            }
        }
        arr[size++] = (i + 1) * 10;
    }
    printf("Array elements: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    size--;
    printf("\nAfter deletion: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nElement at index 2: %d\n", arr[2]);
    free(arr);
    return 0;
}
