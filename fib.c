#include<stdio.h>
int main()
{
int a1,a2,next,n;
int i;
a1=0;
a2=1;
printf("\n enter a number :");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
printf("\n %d",a1);
next=a1+a2;
a1=a2;
a2=next;
}
return 0;
}
