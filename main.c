#include "my_mat.h"
#include <stdio.h>

int main() {
    char command = '0';
    int i,j;
    while(command != 'D') {
        scanf(" %c", &command);
        switch (command)
        {
        case 'A':
            scanMatrix();
            break;

        case 'B':
            scanf("%d%d", &i, &j);
            existMatrix(i, j);
            break;

        case 'C':
            scanf("%d%d", &i, &j);
            shortestPathMatrix(i, j);
            break;
        
        default:
            break;
        }
    }
    return 0;
}