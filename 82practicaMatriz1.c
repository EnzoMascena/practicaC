#include<stdio.h>

void cargar (int mat[3][5]) {

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            printf("Ingresa componente");
            scanf("%i", &mat[x][y]);
        }
        
    }
}

void imprimir (int mat[3][5]) {

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            printf("%i ",mat[x][y]);
        }
        printf("\n");
    }
    
}

int main () {
    
    int mat[3][5];
    cargar(mat);
    imprimir(mat);

return 0;
}
