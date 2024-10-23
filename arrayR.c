#include <stdio.h>
void print_array(int arr[],int b);
void main()
{
int temp,smallest,i,j;
int arr[]={65,25,12,22,11};
int n=sizeof(arr)/sizeof(arr[0]);

for(i=0;i<n-1;i++)
{
int minidx=i;
for(j=i+1;j<n;j++)
{
if(arr[minidx]>arr[j])
minidx=j;
}

temp=arr[i];
arr[i]=arr[minidx];
arr[minidx]=temp;

print_array(arr,n);
}
}

void print_array(int arr[],int n)
{
for(int i=0;i<n;i++)
printf("%d\t",arr[i]);

printf("\n");
}
