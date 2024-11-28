#include <stdio.h>

int main() {
    int n, i, j;

    
    printf("nhap kich thuoc cua ma tran vuong: ");
    scanf("%d", &n);

    int matrix[n][n]; 

   
   
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

   
    int sum = 0;
    
    for (i = 0; i < n; i++) {
        printf("%d ", matrix[i][n - 1 - i]); 
        sum += matrix[i][n - 1 - i];
    }

  
    printf(" %d\n", sum);

    return 0;
}

