#include<stdio.h>

void cargarMatriz (int matriz[4][4]) {

    
    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 4; x++)
        {   
            printf("Ingresa valor de matriz en el espaicio [%i][%i]", y,x);
            scanf("%i ", &matriz[y][x]);
        }
    }
}

void imprimirMatriz (int matriz[4][4]) {

    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 4; x++)
        {
            printf("%i ", matriz[y][x]);
        }
        printf("\n");
    }
}

void diagonal (int matriz [4][4]) {

    printf("Los numeros diagonales son\n");

    for (int x = 0; x < 4; x++)
    {
        for (int y = 0; y < 4; y++)
        {
            if (x == y)
            {
                printf ("%i-", matriz[x][y]);
            }
        }
    }
}

int main () {

    int matriz[4][4];

    cargarMatriz(matriz);
    imprimirMatriz(matriz);
    diagonal(matriz);

return 0;
}
