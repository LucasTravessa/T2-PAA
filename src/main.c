#include <stdio.h>
#include "./lidar-matriz.h"
#include "./gerar-solucoes.h"
#include "./geracao.h"

#define GERACOES 10000
#define TAMANHO_POPULACAO 10

int main()
{
    int **mat_adjacencia;
    int **solucoes;
    int vertices, arestas;

    if (carregar_matriz_ajacencia(&mat_adjacencia, &vertices, &arestas) != 1)
    {
        return 1;
    }

    int *melhor_solucao = malloc((vertices + 1) * sizeof(int));
    melhor_solucao[0] = vertices; // Inicializa com o número máximo de cores
    int menor_num_cores = vertices;

    printf("\nMatriz de adjacencia, %d vertices:\n", vertices);
    imprimir_matriz(mat_adjacencia, vertices);

    printf("\nGerando soluções aleatórias...\n");
    gerar_solucoes(&solucoes, vertices, TAMANHO_POPULACAO);

    printf("\nRodando por %d Geracoes\n", GERACOES);
    for (int i = 0; i < GERACOES; i++)
    {
        printf("\nGeracao %d\n", i + 1);
        menor_num_cores = geracao(mat_adjacencia, &solucoes, vertices, TAMANHO_POPULACAO, &melhor_solucao);
        printf("\nMenor numero de cores: %d\n", menor_num_cores);
    }

    printf("\nMenor numero de cores FINAL: %d", menor_num_cores);
    printf("\nMelhor solução encontrada FINAL:\n");
    for (int i = 1; i < vertices + 1; i++)
    {
        printf("%d, ", melhor_solucao[i]);
    }
    printf("\n");
    return 0;
}
