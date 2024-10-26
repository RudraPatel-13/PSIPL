#include <stdio.h>
int fib(int y);
void main()
{
int n,a;
printf("Enter the number of  term of fibonacci series to be printed: ");
scanf("%d",&n);
a=fib(n);
printf("%d\n",a);
}
int fib(int z)
{
if(z==0||z==1)
return z;
else
return fib(z-1) + fib(z-2);
}
