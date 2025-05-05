void funcao_avaliacao(int **mat, int vertices, int **solucao)
{
    for (int i = 0; i < vertices; i++)
    {
        for (int j = 0; j < vertices; j++)
        {
            if (i == j || (*solucao)[i + 1] != (*solucao)[j + 1])
                continue;
            if (mat[i][j] == 1)
            {
                // Vértices adjacentes com mesma cor => solução inválida
                (*solucao)[0] = -1; // Define a flag de erro na solução
                return;
            }
        }
    }
    int numero_cores = 0;
    int cores[vertices];
    for (int i = 0; i < vertices; i++)
    {
        cores[i] = 0; // Inicializa o vetor de cores
    }
    for (int i = 0; i < vertices; i++)
    {
        if (cores[(*solucao)[i + 1]] == 0)
        {
            cores[(*solucao)[i + 1]] = 1; // Marca a cor utilizada
            numero_cores++;               // Incrementa o número de cores utilizadas
        }
    }

    (*solucao)[0] = numero_cores; // Armazena o número de cores na primeira posição da solução
    return;
}