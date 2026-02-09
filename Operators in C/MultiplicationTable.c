#include<stdio.h>
int main(void)
{
int n, i;
printf("Enter number: ");
scanf("%d", &n);
printf("***Multiplication table of %d ***\n",n);
for(i = 1; i <= 10; i++)
{
printf("%4d X %4d = %4d", n, i, (n*i));
printf("\n");
}
return 0;
}