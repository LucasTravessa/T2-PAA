int funcao_avaliacao(int **mat, int vertices, int *solucao, int tamanho_solucao)
{
    int repetidos = 0;
    for (int i = 1; i < tamanho_solucao; i++)
    {
        for (int j = 1; j < tamanho_solucao; j++)
        {
            if (i == j)
                continue;
            if (solucao[i] == solucao[j] && mat[i][j] == 1)
            {
                // Vértices adjacentes com mesma cor => solução inválida
                solucao[0] = -1; // Define a flag de erro na solução
                return -1;
            }
            repetidos++;
        }
    }

    int numero_cores = vertices - (repetidos / 2);
    solucao[0] = numero_cores; // Armazena o número de cores na primeira posição da solução

    return numero_cores;
}