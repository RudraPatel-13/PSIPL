#include <stdio.h>

int fact(int k){
   int ans=0;
   for(int i=1;i<k;i++){
      if(k%i==0){
          ans= ans + i;
      }
   }
   return (ans);
}

int main(){
   printf("Write two numbers \n");
   int n,m;
   scanf("%d%d",&n,&m);
   int ans1=fact(n);
   int ans2=fact(m);
   if( ans1 == m && ans2 == n ){
      printf("The given two numbers %d and %d are Amicable \n",n,m);
   }
   else{
      printf("The given two numbers %d and %d are not Amicable \n",n,m);
   }
   return 0;
} 
