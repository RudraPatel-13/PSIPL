#include <stdio.h>

int fact(int k){
int fac=1;
for(int j=1;j<=k;j++){
fac*=j;
}
int ans=fac/k;
return (ans);
}

int sum(int n){
int add=0;
for(int i=1;i<=n;i++){
int num= fact(i);
add+=num;
}
return (add);
}

int main(){
printf("Write your number till which you want \n");
int n;
scanf("%d",&n);
int ans=sum(n);
printf("The ans is %d",ans);
return 0;
}
