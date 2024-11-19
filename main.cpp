#include <iostream>
#include <locale>
#include <iomanip> // to use 'setw', 'left' and 'setfill'
#include <string>  // use getline
#include <limits>  // to use numeric limits

using namespace std;

void inicializarMatriz(char M[3][3]);
void imprimirTabuleiro(char M[3][3]);
void iniciarJogo(char M[3][3]);
bool verificarVencedor(char M[3][3]);

int main()
{
    setlocale(LC_ALL, "pt_PT.UTF-8");
    char M[3][3];

    // char M[3][3] = {
    //     {' ', ' ', ' '},
    //     {' ', ' ', ' '},
    //     {' ', ' ', ' '}};

    inicializarMatriz(M);
    imprimirTabuleiro(M);
    iniciarJogo(M);

    return 0;
}

void inicializarMatriz(char M[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            M[i][j] = ' ';
        }
    }
}

void imprimirTabuleiro(char M[3][3])
{
    system("cls");
    for (int i = 0; i < 3; i++) // linhas
    {
        for (int j = 0; j < 3; j++) // colunas
        {
            // printf("%-5c",M[i][j]);
            cout << setw(5) << setfill(' ') << M[i][j]; // center alignment, width 5 characters wide

            if (j < 2) // não quero que escreva depois da última coluna
            {
                cout << "|";
            }
        }
        //  printf("/n");
        cout << endl;

        if (i < 2) // não quero que escreva por baixo da última linha
        {
            cout << "-----|-----|-----" << endl;
        }
    }
}

void iniciarJogo(char M[3][3])
{

    int maxJogadas = 9;
    int numJogadas = 0;
    int linha, coluna;
    char again;
    string input;

    while (numJogadas < maxJogadas)
    {
        bool jogadaValida = false;

        do
        {
            //  printf("Seleciona onde pretendes jogar (linha, coluna).\n");
            //  printf(">");
            //  scanf("(%d, %d)", &linha, &coluna);

            cout << "Seleciona onde pretendes jogar (linha, coluna)." << endl;

            getline(cin, input);

            if (input == "q")
            {
                cout << "Saiu do jogo." << endl;
                exit(0);
            }

            stringstream inputStream(input);                               // processa o formato de entrada
            char paren1, paren2, virgula;                                  // captura os parênteses e vírgula
            inputStream >> paren1 >> linha >> virgula >> coluna >> paren2; // extrai os valores corretamente (ignora os espaços)

            //  cout << "Linha: " << linha << ", Coluna: " << coluna << endl;

            if (inputStream.fail() || paren1 != '(' || paren2 != ')' || virgula != ',' || linha < 1 || linha > 3 || coluna < 1 || coluna > 3)
            {
                cout << "Entrada inválida." << endl;
                continue; // volta para o início do do-while
            }

            linha--;
            coluna--;

            if (M[linha][coluna] == ' ')
            {

                if (numJogadas % 2 != 0)
                {
                    M[linha][coluna] = 'X';
                }
                else
                {
                    M[linha][coluna] = 'O';
                }

                jogadaValida = true;
            }
            else
            {
                cout << "Jogada inválida!" << endl;
            }

            numJogadas++;

        } while (!jogadaValida); // até que jogada seja verdadeira

        imprimirTabuleiro(M);

        if (verificarVencedor(M) == true)
        {
            cout << "Jogar novamente?" << endl;
            cin >> again;

            if (again == 'y')
            {
                numJogadas = 0;
                // jogadaValida = false;
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // limpar buffer
                inicializarMatriz(M);
                imprimirTabuleiro(M);
                iniciarJogo(M);
            }
            else if (again == 'n')
            {
                exit(0);
            }
            // return;
        }

        // cout << "Escreva (linha, coluna) no intervalo 1-3." << endl;

        if (numJogadas == 9)
        {
            cout << "O jogo terminou em empate!" << endl;
        }
    }
}

bool verificarVencedor(char M[3][3])
{
    if (M[0][0] == M[1][1] && M[0][0] == M[2][2] && M[0][0] != ' ')
    {
        //  printf("Player %c won!\n", M[0][0]);
        cout << "Player '" << M[0][0] << "' won!" << endl;
        return true;
    }
    else if (M[0][2] == M[1][1] && M[0][2] == M[2][0] && M[0][2] != ' ')
    {
        //  printf("Player %c won!\n", M[0][2]);
        cout << "Player '" << M[0][2] << "' won!" << endl;
        return true;
    }

    for (int k = 0; k < 3; k++)
    {
        if (M[k][0] == M[k][1] && M[k][0] == M[k][2] && M[k][0] != ' ')
        {
            //  printf("Player %c won!\n", M[k][0]);
            cout << "Player '" << M[k][0] << "' won!" << endl;
            return true;
        }
        else if (M[0][k] == M[1][k] && M[0][k] == M[2][k] && M[0][k] != ' ')
        {
            //  printf("Player %c won!\n", M[0][k]);
            cout << "Player '" << M[0][k] << "' won!" << endl;
            return true;
        }
    }

    return false;
}
