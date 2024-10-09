#include <stdio.h>

int main(){
int num;
scanf("%d",&num);
  
for(int i=num;i>0;i--){
for(int j=i;j>0;j--){
printf("%d ",j);
}
printf(" \n");
}

return 0;
}
