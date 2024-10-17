#include <stdio.h>

int main() {
   int n, i, j, temp;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int numbers[n];

    
    for (i = 0; i < n; i++) {
       printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
       }
    }
 
    printf("Numbers in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

