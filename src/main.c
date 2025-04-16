#include <stdio.h>
#include "./lidar-matriz.h"

int main()
{
    int **mat_adjacencia;
    int vertices, arestas;

    if (carregar_matriz_ajacencia(&mat_adjacencia, &vertices, &arestas) != 1)
    {
        return 1;
    }

    printf("\nMatriz de adjacencia:\n");
    imprimir_matriz(mat_adjacencia, vertices);

    liberar_memoria_matriz(mat_adjacencia, vertices);
    return 0;
}
