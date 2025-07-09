#include <stdio.h>
int main()
{
    int A[10][10], B[10][10], C[10][10];
    int m,n,p,q;
    printf("Enter rows and columns of first matrix (A): ");
    scanf("%d %d", &m, &n);
    printf("Enter rows and columns of second matrix (B): ");
    scanf("%d %d", &p, &q);
    if (n != p) 
    {
        printf("Matrix multiplication not possible!\n");
        return 1;
    }
    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) 
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++) 
        {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            C[i][j] = 0;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            for (int k = 0; k < n; k++) 
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("\nResultant Matrix C (A x B):\n");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < q; j++) 
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}