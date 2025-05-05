#include "./funcao-avaliacao.h"
#include "./mudanca-genetica.h"
#include <stdio.h>

int geracao(int **mat, int ***populacao, int vertices, int tamanhoPopulacao, int **melhorSolucao)
{
    int i;
    int menorNumCores = vertices;

    for (i = 0; i < tamanhoPopulacao; i++)
    {
        funcao_avaliacao(mat, vertices, &(*populacao)[i]);
    }

    elitismo(*populacao, tamanhoPopulacao, melhorSolucao, vertices);
    menorNumCores = (*melhorSolucao)[0];

    // Realiza o cruzamento e mutação para gerar nova população
    for (i = 0; i < tamanhoPopulacao; i++)
    {
        mutacao(&(*populacao)[i], vertices);
    }
    for (i = 0; i < tamanhoPopulacao; i++)
    {
        int temp = i;
        cruzamento(&(*populacao)[temp], &(*populacao)[++i], vertices);
    }

    return menorNumCores;
}