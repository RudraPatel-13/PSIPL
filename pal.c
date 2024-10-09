#include<stdio.h>
int main()
{
int x,y,num,rev;
printf("Enter a number");
scanf("%d",&x);
num=x;
rev=0;
while(x>0)
{
y=x%10;
rev = rev*10+y;
x=x/10;
}
if(num!=rev)
{
printf("The number is not a pallindrome\n");
}
else
{
printf("the number is a pallindrome");
}
return 0;
}
