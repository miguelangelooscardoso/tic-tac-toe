#include <stdio.h>
#include <stdlib.h>

void checkWinner();

int main()
{
    puts("************************************\n");
    puts("       Welcome to Tic Tac Toe!      \n");
    puts("************************************\n");

    printf("");

    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("      %d     |     %d     |     %d     \n", matrix[0][0], matrix[0][1], matrix[0][2]);
    printf("- - - - - - - - - - - - - - - - - - \n");
    printf("      %d     |     %d     |     %d     \n", matrix[1][0], matrix[1][1], matrix[1][2]);
    printf("- - - - - - - - - - - - - - - - - - \n");
    printf("      %d     |     %d     |     %d     \n", matrix[2][0], matrix[2][1], matrix[2][2]);

    printf("\n\n\n\n");

    //  fills an empty matrix with the selected user input
    char emptyMatrix[3][3] = {{0}};
    int numJogadas = 1;
    int maxJogadas = 9;
    while (numJogadas <= maxJogadas)
    {

        int field;
        printf("Select your field!\n");
        printf(">");
        scanf("%d", &field);

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {

                if (matrix[i][j] == field && emptyMatrix[i][j] == '\0')
                {

                    if (numJogadas % 2 != 0)
                    {
                        emptyMatrix[i][j] = 'X';
                    }
                    else
                    {
                        emptyMatrix[i][j] = 'O';
                    }
                    numJogadas++;
                }
            }
        }

        system("clear");
        //  test empty matrix (to do)

        printf("      %c     |     %c     |     %c     \n", emptyMatrix[0][0] ? emptyMatrix[0][0] : ' ', emptyMatrix[0][1] ? emptyMatrix[0][1] : ' ', emptyMatrix[0][2] ? emptyMatrix[0][2] : ' ');
        printf("- - - - - - - - - - - - - - - - - - - -\n");
        printf("      %c     |     %c     |     %c     \n", emptyMatrix[1][0] ? emptyMatrix[1][0] : ' ', emptyMatrix[1][1] ? emptyMatrix[1][1] : ' ', emptyMatrix[1][2] ? emptyMatrix[1][2] : ' ');
        printf("- - - - - - - - - - - - - - - - - - - -\n");
        printf("      %c     |     %c     |     %c     \n", emptyMatrix[2][0] ? emptyMatrix[2][0] : ' ', emptyMatrix[2][1] ? emptyMatrix[2][1] : ' ', emptyMatrix[2][2] ? emptyMatrix[2][2] : ' ');

        // primeiro preenche a matrix e só depois verifica

        if (emptyMatrix[0][0] == emptyMatrix[1][1] && emptyMatrix[0][0] == emptyMatrix[2][2] && emptyMatrix[0][0] != '\0')
        {
            printf("Player %c won!\n", emptyMatrix[0][0]);
            break;
        }
        else if (emptyMatrix[0][2] == emptyMatrix[1][1] && emptyMatrix[0][2] == emptyMatrix[2][0] && emptyMatrix[0][2] != '\0')
        {
            printf("Player %c won!\n", emptyMatrix[0][2]);
            break;
        }

        for (int k = 0; k < 3; k++)
        {
            if (emptyMatrix[k][0] == emptyMatrix[k][1] && emptyMatrix[k][0] == emptyMatrix[k][2] && emptyMatrix[k][0] != '\0')
            {
                printf("Player %c won!\n", emptyMatrix[k][0]);
                return 1; // break isn't working
            }
            else if (emptyMatrix[0][k] == emptyMatrix[1][k] && emptyMatrix[0][k] == emptyMatrix[2][k] && emptyMatrix[0][k] != '\0')
            {
                printf("Player %c won!\n", emptyMatrix[0][k]);
                return 1; // break isn't working
            }
        }
    }

    if (numJogadas > maxJogadas)
    {
        printf("Draw!\n");
        return 0; // Exit the game
    }
}

void checkWinner()
{

    // Condições para ganhar:

    // 1. // diagonal principal
    // if(emptyMatrix[0][0] == emptyMatrix[1][1] && emptyMatrix[0][0] == emptyMatrix[2][2] && emptyMatrix[0][0] != '\0'){
    //     printf("Winner!");
    // }
    // 2. // diagonal secundária
    //     emptyMatrix[0][2] == emptyMatrix[1][1] && emptyMatrix[0][2] == emptyMatrix[2][0] && emptyMatrix[0][2] != '\0'
    // 3. // linha
    //     emptyMatrix[0][0] == emptyMatrix[0][1] == emptyMatrix[0][2] && emptyMatrix[0][0] != '\0'
    //     emptyMatrix[1][0] == emptyMatrix[1][1] == emptyMatrix[1][2] && emptyMatrix[1][0] != '\0'
    //     emptyMatrix[2][0] == emptyMatrix[2][1] == emptyMatrix[2][2] && emptyMatrix[2][0] != '\0'
    // 4. // coluna
    //     emptyMatrix[0][0] == emptyMatrix[1][0] == emptyMatrix[2][0] && emptyMatrix[0][0] != '\0'
    //     emptyMatrix[0][1] == emptyMatrix[1][1] == emptyMatrix[2][1] && emptyMatrix[0][1] != '\0'
    //     emptyMatrix[0][2] == emptyMatrix[1][2] == emptyMatrix[2][2] && emptyMatrix[0][2] != '\0'
    // 5. verificar se está tudo preenchido antes de dar o empate
}
