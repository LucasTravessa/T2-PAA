#include <math.h>

void cruzamento(int **solucao1, int **solucao2, int vertices)
{
    int pontoCorte1, pontoCorte2;
    pontoCorte1 = 1 + (rand() % vertices);
    pontoCorte2 = 1 + (rand() % vertices);

    if (pontoCorte1 > pontoCorte2)
    {
        int aux = pontoCorte1;
        pontoCorte1 = pontoCorte2;
        pontoCorte2 = aux;
    }

    for (int i = 1; i < vertices + 1; i++)
    {
        if (i >= pontoCorte1 && i <= pontoCorte2)
        {
            int temp = (*solucao1)[i];
            (*solucao1)[i] = (*solucao2)[i];
            (*solucao2)[i] = temp;
        }
    }
}

void mutacao(int **solucao, int vertices)
{
    int pontoMutacao, cor;
    pontoMutacao = 1 + (rand() % vertices);

    cor = rand() % vertices;

    if ((*solucao)[pontoMutacao] != cor)
    {
        (*solucao)[pontoMutacao] = cor;
    }
}

void elitismo(int **populacao, int tamanhoPopulacao, int **melhorSolucao, int vertices)
{
    int indiceMelhor = 0, menorCores = vertices;
    for (int i = 0; i < tamanhoPopulacao; i++)
    {
        if (populacao[i][0] < menorCores && populacao[i][0] != -1)
        {
            menorCores = populacao[i][0];
            indiceMelhor = i;
        }
    }
    *melhorSolucao = populacao[indiceMelhor];
}
