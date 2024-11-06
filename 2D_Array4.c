#include <stdio.h>

int main(){
   int n;
   printf("Write the dimensions of the 2D Array \n");
   scanf("%d",&n);
   int a1[n][n];
   printf("Enter the elements for array\n");
   for(int i=0;i<n;i++){
      printf("Enter the elements for %d row \n",i);
      for(int j=0;j<n;j++){
         scanf("%d",&a1[i][j]);
      }
   }
   int sum=0;
   for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
         sum+=a1[i][j];
      }
   }
   printf("The sum of all the terms of the array is %d \n",sum);
   return 0;
}
