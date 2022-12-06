#include <stdio.h>
#include "my_mat.h"
#define n 2
int mat[n][n];

void scanMatrix() {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            printf("mat[%d][%d]=",i,j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void existMatrix(int i, int j) {
    if(mat[i][j] > 0)
        printf("True");
    else
        printf("False");
}

void shortestPathMatrix(int from, int to) {
    for(int k=0;k<n;k++) {
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(mat[i][j] < (mat[i][k]+mat[k][j]))
                    mat[i][j] = mat[i][j];
                else
                    mat[i][j] = mat[i][k]+mat[k][j];         
            }
        }
    }
    if(mat[from][to] == 0)
        printf("-1");
    else 
        printf("%d", mat[from][to]);
}

void printMatrix() {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}