#include "my_mat.h"
#include <stdio.h>
#include <stdlib.h>
#define n 10

void scanMatrix(int** mat) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++)
            scanf(" %d", &mat[i][j]);
    }

    for(int k=0;k<n;k++) {
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if ((k!=i) && (k!=j) && (i!=j)) {
                    if(mat[i][k]==0 || mat[k][j]==0)
                        continue;
                    if(mat[i][j] == 0)
                        mat[i][j] = mat[i][k]+mat[k][j];
                    else if(mat[i][j] < (mat[i][k]+mat[k][j]))
                        mat[i][j] = mat[i][j];
                    else
                        mat[i][j] = mat[i][k]+mat[k][j];
                }         
            }
        }
    }
}

void existMatrix(int** mat, int i, int j) {
    if(mat[i][j] > 0)
        printf("True\n");
    else
        printf("False\n");
}


void shortestPathMatrix(int** mat, int from, int to) {
    if(mat[from][to] == 0)
        printf("-1\n");
    else 
        printf("%d\n", mat[from][to]);
}
