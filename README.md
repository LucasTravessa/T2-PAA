# T2-PAA: Algoritmo Genético para Coloração de Vértices

Este repositório contém a implementação de um algoritmo genético para resolver o problema de coloração de vértices, desenvolvido como parte da disciplina de **Programação, Análise e Algoritmos (PAA)**.

## Descrição do Problema

O problema de coloração de vértices consiste em atribuir cores a cada vértice de um grafo de forma que dois vértices adjacentes não compartilhem a mesma cor, utilizando o menor número possível de cores. Este é um problema clássico de otimização combinatória com aplicações em áreas como alocação de recursos, escalonamento e redes.

## Algoritmo Genético

O algoritmo genético é uma técnica de busca inspirada nos processos de seleção natural e evolução biológica. Ele utiliza conceitos como:

- **População**: Conjunto de soluções candidatas.
- **Seleção**: Escolha das melhores soluções com base em uma função de aptidão.
- **Cruzamento (Crossover)**: Combinação de soluções para gerar novas.
- **Mutação**: Alteração aleatória para introduzir diversidade.
- **Aptidão**: Avaliação da qualidade de uma solução com base no número de cores utilizadas e na validade da coloração.

## Estrutura do Projeto

- `src/`: Código-fonte do algoritmo genético.
- `bin/`: Binario de execução
- `README.md`: Documentação do projeto.

## Como Executar

1. Clone o repositório:

   ```bash
   git clone https://github.com/LucasTravessa/T2-PAA.git
   cd T2-PAA
   ```

2. Certifique se de possuir o build essentials instalado, incluindo o compilador C e o utilitário Make.

3. Execute o algoritmo:

   ```bash
        make

   ```

## Contribuição

Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou enviar pull requests.
