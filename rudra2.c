#include <stdio.h>

int add(int x,int y){
   int add1= x + y;
   return (add1);
}

int sub(int x, int y){
   int sub1;
   if(x>y){
      sub1 = x - y;
   }
   else{
      sub1 = y - x;
   }
   return (sub1);
}  

int multiply(int x,int y){
   int multiply1= x*y;
   return (multiply1);
}

int div(int x, int y){
   int div1;
   if(x>y){
      div1 = x/y;
   }
   else{
      div1 = y/x;
   }
   return (div1);
}  

int rem(int x, int y){
   int rem1;
   if(x>y){
      rem1 = x%y;
   }
   else{
      rem1 = y%x;
   }
   return (rem1);
} 

int main(){
   printf("Enter two numbers :- \n");
   int x,y;
   scanf("%d%d",&x,&y);
   int add1 = add(x,y);
   int sub1 = sub(x,y);
   int multiply1 = multiply(x,y);
   int div1 = div(x,y);
   int rem1 = rem(x,y);
   printf(" Addition of the two numbers %d and %d = %d \n",x,y,add1);
   printf(" Subtraction of the two numbers %d and %d = %d \n",x,y,sub1);
   printf(" Multiplication of the two numbers %d and %d = %d \n",x,y,multiply1);
   printf(" Division of the two numbers %d and %d = %d \n",x,y,div1);
   printf(" Remainder of the two numbers %d and %d = %d \n",x,y,rem1);
   return 0;
}
