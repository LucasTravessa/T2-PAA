#include <math.h>

void cruzamento(int *solucao1, int *solucao2, int *novaSolucao, int vertices)
{
    int i, pontoCorte1, pontoCorte2;
    pontoCorte1 = 1 + (rand() % vertices);
    pontoCorte2 = 1 + (rand() % vertices);

    if (pontoCorte1 > pontoCorte2)
    {
        int aux = pontoCorte1;
        pontoCorte1 = pontoCorte2;
        pontoCorte2 = aux;
    }

    for (i = 1; i < vertices; i++)
    {
        if (i < pontoCorte1 || i > pontoCorte2)
        {
            novaSolucao[i] = solucao1[i];
        }
        else
        {
            novaSolucao[i] = solucao2[i];
        }
    }
}

void mutacao(int *solucao, int vertices)
{
    int i, pontoMutacao, cor;
    pontoMutacao = 1 + (rand() % vertices);

    cor = rand() % vertices;

    if (solucao[pontoMutacao] != cor)
    {
        solucao[pontoMutacao] = cor;
    }
}

void elitismo(int **populacao, int tamanhoPopulacao, int *melhorSolucao)
{
    int i, indiceMelhor = 0;
    for (i = 1; i < tamanhoPopulacao; i++)
    {
        if (populacao[i][0] < populacao[indiceMelhor][0])
        {
            indiceMelhor = i;
        }
    }
    melhorSolucao = populacao[indiceMelhor];
}
