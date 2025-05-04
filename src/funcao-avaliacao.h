int funcao_avaliacao(int **mat, int vertices, int **solucao)
{
    int repetidos = 0;
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
                return -1;
            }
            repetidos++;
        }
    }

    int numero_cores = vertices - (repetidos / 2);
    (*solucao)[0] = numero_cores; // Armazena o número de cores na primeira posição da solução

    return numero_cores;
}