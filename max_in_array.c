#include <stdio.h>
int findMax(int *arr, int size) {
    int max = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max)
            max = *(arr + i);
    }
    return max;
}

int main() {
    int arr[5];
    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    int max = findMax(arr, 5);
    printf("Maximum element = %d\n", max);
    return 0;
}