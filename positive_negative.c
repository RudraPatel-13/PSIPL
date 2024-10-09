#include<stdio.h>
int main()
{
int x;
printf("Enter a number:\n");
scanf("%d",&x);
if(x>0)
{
printf("the number is positive");
}
else if(x==0)
{
printf("the number is neither positive nor negative");
}
else if(x<0)
{
printf("the number is negative");
}
return 0;
}
