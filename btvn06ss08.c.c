#include <stdio.h>

int main() {
    int n, i, j;
    
    
    printf("Nhap kich thuoc ma tran vuong : ");
    scanf("%d", &n);

    int matrix[n][n];

    
    printf("nhap cac phan tu cua ma tran:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    
    int sum = 0;
    
    for (i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]); 
        sum += matrix[i][i];
    }

    
    printf("%d\n", sum);

    return 0;
}

