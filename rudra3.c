#include <stdio.h>

int armstrong(int n){
    
    int sum=0;
    while(n>0){
        int ld = n%10;
        sum += ld*ld*ld;
        n = n/10;
    }
    return (sum);
}

int main(){
    
    printf("Enter a number to check if it's an Armstrong Number \n");
    int n;
    scanf("%d",&n);
    
    int og = n;
    
    int sum=armstrong(n);
    
    if(sum == og){
        printf("%d is an Armstrong number \n",og);
    }
    else{
        printf("%d is Not an Armstrong number \n",og);
    }
    return 0;
}
