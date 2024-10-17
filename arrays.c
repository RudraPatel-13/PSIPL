#include <stdio.h>

int main()
{
	int n,i;
	printf("Enter the number of students: ");
	scanf("%d",&n);
	float marks[n];
	for (i=0;i<n; i++) 
	{
	printf("Enter marks for students %d: ",i+1);
	scanf("%f", &marks[i]);
	}
	float highest = marks[0];
	float lowest = marks[0];
	for (i=1; i<n; i++)
	{
	if(marks[i]>highest){
	highest = marks[i];
	}
	if (marks[i] < lowest){
	lowest = marks[i];
	}
	}
	printf("Highest marks: %.2f\n",highest);
	printf("Lowest marks: %.2f\n",lowest);
	return 0;
	}
