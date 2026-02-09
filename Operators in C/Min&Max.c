#include <stdio.h>

int main(void)
{
    int a, b, c;
    int min, max;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a <= b && a <= c)
        min = a;
    else if (b <= a && b <= c)
        min = b;
    else
        min = c;

    if (a >= b && a >= c)
        max = a;
    else if (b >= a && b >= c)
        max = b;
    else
        max = c;

    printf("Smallest number is: %d\n", min);
    printf("Largest number is: %d\n", max);

    return 0;
}