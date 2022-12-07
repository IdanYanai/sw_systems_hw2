#include "my_mat.h"
#include <stdio.h>
#include <stdlib.h>
#define n 10

int main() {
    int** mat = (int**)malloc(n * sizeof(int*));
    for(int i=0;i<n;i++)
        mat[i] = (int*)malloc(n * sizeof(int));

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            mat[i][j] = 0;
    
    char command = '0';
    int i,j = 0;

    while(command != 'D') {
        scanf(" %c", &command);
        switch (command)
        {
        case 'A':
            scanMatrix(mat);
            break;

        case 'B':
            scanf("%d%d", &i, &j);
            existMatrix(mat, i, j);
            break;

        case 'C':
            scanf("%d%d", &i, &j);
            shortestPathMatrix(mat, i, j);
            break;
        
        default:
            break;
        }
    }
    for(int i=0;i<n;i++)
        free(mat[i]);
    free(mat);
    return 0;
}