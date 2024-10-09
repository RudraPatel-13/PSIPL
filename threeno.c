#include<stdio.h>
int main()
{
int x;
printf("Enter number 1:\n");
scanf("%d",&x);
int y;
printf("Enter number 2:\n");
scanf("%d",&y);
int z;
printf("Enter number 3:\n");
scanf("%d",&z);
if(x<y)
{
	if(x<z)
	{
	printf("the smallest number is x" );
	}
	else
	{
	printf("the smallest number is z");
	}
}
else
{
if(y<z)
{
printf("the smallest number is y");
}

else
{
printf("the smallest number is z");
}
}
return 0;
}
