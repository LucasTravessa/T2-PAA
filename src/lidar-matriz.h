#include <stdio.h>
#include <stdlib.h>

int carregar_matriz_ajacencia(int ***mat, int *vertices, int *arestas)
{
    int i, j;
    FILE *arqEntrada = fopen("src/Grafo.txt", "r");

    if (arqEntrada == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return -1;
    }

    fscanf(arqEntrada, "%d %d", vertices, arestas);

    *mat = malloc(*vertices * sizeof(int *));
    for (i = 0; i < *vertices; i++)
        (*mat)[i] = malloc(*vertices * sizeof(int));

    for (i = 0; i < *vertices; i++)
    {
        for (j = 0; j < *vertices; j++)
        {
            fscanf(arqEntrada, "%d", &((*mat)[i][j]));
        }
    }

    fclose(arqEntrada);
    return 1;
}

void imprimir_matriz(int **mat, int vertices)
{
    for (int i = 0; i < vertices; i++)
    {
        for (int j = 0; j < vertices; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void liberar_memoria_matriz(int **mat, int linhas)
{
    for (int i = 0; i < linhas; i++)
    {
        free(mat[i]);
    }
    free(mat);
}

void liberar_memoria_vetor(int *vetor)
{
    free(vetor);
}