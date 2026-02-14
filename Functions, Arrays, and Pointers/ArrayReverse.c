#include <stdio.h>

int main() {
    int arr[100], i, n;
    int *ptr;

    ptr = arr;   // Pointer points to first element of array

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", (ptr + i));   // Reading using pointer
    }

    printf("\nElements in reverse order:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", *(ptr + i));   // Printing in reverse using pointer
    }

    return 0;
}
