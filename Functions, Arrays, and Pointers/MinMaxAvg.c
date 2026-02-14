#include <stdio.h>

int main() {
    int n, i;
    int a[100];
    int sum = 0;
    int min, max;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    min = a[0];
    max = a[0];

    for(i = 0; i < n; i++) {
        sum = sum + a[i];

        if(a[i] < min) {
            min = a[i];
        }

        if(a[i] > max) {
            max = a[i];
        }
    }

    avg = (float)sum / n;

    printf("\nMinimum = %d", min);
    printf("\nMaximum = %d", max);
    printf("\nSum = %d", sum);
    printf("\nAverage = %.2f", avg);

    return 0;
}
