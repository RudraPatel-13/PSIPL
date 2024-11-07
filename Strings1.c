#include <stdio.h>
#include <string.h>

void main(){
	char string[12]="Hello World";
	scanf("%[^\n]s",string);
	printf("%s\n",string);
	}
