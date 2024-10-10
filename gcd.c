#include <stdio.h>
int a,b,c;

int gcd(int a, int b)
{
	int ans
	if(a>b){
	int k = a%b;
		if(k>b){
		ans= b;
		}
		else{
		ans= k;
		}
	}
	else{
	int l = b%a;
		if(l>a){
		ans=a;
		}
		else{
		ans=l;
		}
	
	}
}



int main()
{

printf("Enter 2 numbers:-");
scanf("%d\n %d\n",&a,b);
printf("");
return 0;
}
