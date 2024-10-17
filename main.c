#include <stdio.h>

int main()
{
    //    printf("************************************\n");
    printf("*********                   ********\n");
    printf("********                     *******\n");
    printf("*******                       ******\n");
    printf("*****                          *****\n");
    printf("****                            ****\n");
    printf("***    Welcome to Tic Tac Toe!   ***\n");
    printf("****                            ****\n");
    printf("*****                          *****\n");
    printf("*******                       ******\n");
    printf("********                     *******\n");
    printf("*********                   ********\n");
    //    printf("************************************\n");

    printf("\n\n\n\n");

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
        scanf("%d", &field);

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (matrix[i][j] == field)
                {
                    emptyMatrix[i][j] = 'X';
                    numJogadas++;
                }
            }
        }

        //  test empty matrix (to do)

        printf("      %c     |     %c     |     %c     \n", emptyMatrix[0][0], emptyMatrix[0][1], emptyMatrix[0][2]);
        printf("- - - - - - - - - - - - - - - - - - - -\n");
        printf("      %c     |     %c     |     %c     \n", emptyMatrix[1][0], emptyMatrix[1][1], emptyMatrix[1][2]);
        printf("- - - - - - - - - - - - - - - - - - - -\n");
        printf("      %c     |     %c     |     %c     \n", emptyMatrix[2][0], emptyMatrix[2][1], emptyMatrix[2][2]);
    }

    return 0;
}