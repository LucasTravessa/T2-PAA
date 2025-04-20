#include <math.h>

void gerar_solucao(int *solucao, int vertices)
{
    solucao[0] = 0; // Define a flag da solucao
    for (int i = 1; i < vertices++; i++)
    {
        solucao[i] = rand() % vertices; // Gera uma cor aleatória entre 0 e vertices-1
    }
}

void gerar_solucoes(int ***solucoes, int vertices, int num_solucoes)
{
    *solucoes = malloc(num_solucoes * sizeof(int *));
    for (int i = 0; i < num_solucoes; i++)
    {
        (*solucoes)[i] = malloc(vertices++ * sizeof(int));
        gerar_solucao(*solucoes[i], vertices);
    }
}