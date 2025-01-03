# Tic Tac Toe - Jogo da Velha

Este é um simples jogo da velha (Tic Tac Toe) implementado em C e C++. O jogo permite que dois jogadores joguem alternadamente no terminal, usando os números de 1 a 9 para selecionar suas jogadas. O objetivo é alinhar três símbolos em uma linha, coluna ou diagonal.

## Como Jogar

1. O jogo começa com uma matriz de 3x3, onde os números de 1 a 9 são exibidos, representando os campos disponíveis para as jogadas.
2. O jogador 1 joga com 'X' e o jogador 2 joga com 'O'. Eles devem escolher um número de campo para colocar seu símbolo.
3. O jogo termina quando um jogador consegue alinhar três símbolos ou se todos os campos forem preenchidos sem vencedor (empate).

### Exemplo de tela inicial:

### Regras:

- O jogador 1 sempre começa com 'X'.
- Cada jogador escolhe um número entre 1 e 9 para colocar seu símbolo no campo correspondente.
- Se um jogador conseguir alinhar 3 símbolos em uma linha, coluna ou diagonal, ele vence.
- Se todos os campos forem preenchidos sem um vencedor, o jogo termina em empate.

## Como executar o código

### Versão em C

1. Clone o repositório:
    ```bash
    git clone https://github.com/miguelangelooscardoso/tic-tac-toe.git
    ```
2. Acesse a pasta do projeto:
    ```bash
    cd tic-tac-toe
    ```
3. Compile o código:
    ```bash
    gcc main.c -o main
    ```
4. Execute o jogo:
    ```bash
    ./main
    ```

### Versão em C++

1. Clone o repositório:
    ```bash
    git clone https://github.com/miguelangelooscardoso/tic-tac-toe.git
    ```
2. Acesse a pasta do projeto:
    ```bash
    cd tic-tac-toe
    ```
3. Compile o código:
    ```bash
    g++ main.cpp -o main_cpp
    ```
4. Execute o jogo:
    ```bash
    ./main_cpp
    ```
