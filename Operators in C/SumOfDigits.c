#include <stdio.h>
int main()
{
int number, digit, sum = 0;
printf("Enter a positive integer: ");
scanf("%d", &number);
if (number <= 0)
{
printf("Please enter a positive integer.\n");
return 1;
}

while (number > 0)
{
digit = number % 10; // Get the last digit
sum += digit; // Add the digit to the sum
number = number/10; // Remove the last digit from the number
}

printf("The sum of the individual digits is: %d\n", sum);
return 0;
}
