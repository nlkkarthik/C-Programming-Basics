#include <stdio.h>
int main(void)
{
int a, b, c, sum;
float avg;
printf("Enter three numbers: ");
scanf ( "%d %d %d", &a, &b, &c);
sum = a + b + c;
printf("Sum of numbers %d, %d, %d is = %d",a, b, c, sum);
avg = (float)sum/3;
printf("Avg of numbers %d, %d, %d is = %f",a, b, c, avg);
return 0;
}