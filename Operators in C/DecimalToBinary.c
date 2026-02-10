#include<stdio.h>
int main(void)
{
int n, i;
int b[8];
top: printf("Enter a number (0-255): ");
scanf("%d", &n);
if(n < 0 || n > 255)
{
printf("Number is invalid.\n");
goto top;
}
printf("Binary equivalent of %d is:", n);
for(i = 0; i <= 7; i++)
{
b[i] = n % 2; //b[0]: LSB, b[7]: MSB
n = n/2;
}
for(i = 7; i >= 0; i--)
printf("%d", b[i]);
printf("\n");
return 0;
}