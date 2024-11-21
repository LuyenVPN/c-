#include <stdio.h>

void tinhTichMaTran(int n, int m, int A[][100]) {
    int At[100][100];   
    int C[100][100];    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            At[j][i] = A[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
            for (int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * At[k][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int T;
    printf("Nhap so bo test: ");
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int n, m;
        printf("Nhap so hang va so cot cua ma tran (n m): ");
        scanf("%d %d", &n, &m);

        int A[100][100];

     
        printf("Nhap ma tran A:\n");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d", &A[i][j]);
            }
        }
        printf("Test %d:\n", t);
        tinhTichMaTran(n, m, A);
    }

    return 0;
}
