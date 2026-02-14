#include<stdio.h>
#include<math.h>
int main(void)
{
long long int n, i;
int pr_fact = 0;
do
{
printf("Enter a positive number: ");
scanf("%lld", &n);
if(n <= 0)
printf("Number is invalid.\n");
} while(n <= 0);
for(i = 2; i <= sqrt(n); i++)
if(n % i == 0)
{
pr_fact = 1; //factor other than 1 and n is found
break;
}
if(n == 1 || pr_fact == 1)
printf("%lld is not prime.\n", n);
else
printf("%lld is prime.\n", n);
return 0;
}
