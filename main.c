#include <stdio.h>

int main(){
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

    printf("\n\n\n\n\n\n\n\n");

//    char X, O;
    int field;
    printf("Select your field!\n");
    scanf("%d", &field);

    printf("      1     |     2     |     3     \n");
    printf("- - - - - - - - - - - - - - - - - - \n");
    printf("      4     |     5     |     6     \n");
    printf("- - - - - - - - - - - - - - - - - - \n");
    printf("      7     |     8     |     9     \n");

    printf("\n\n\n\n\n\n\n\n");

//  fills an empty matrix with the selected user input
    int matrix[3][3] = {{1, 2, 3},{4, 5, 6}, {7, 8, 9}};
    char emptyMatrix[3][3] = {{0}};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j <3; j++){
            if(matrix[i][j] == field){
                emptyMatrix[i][j] = 'X';
            }
        }
    }

    printf("      %d     |          |           \n", matrix[0][0]);
    printf("- - - - - - - - - - - - - - - - - - \n");
    printf("            |           |           \n");
    printf("- - - - - - - - - - - - - - - - - - \n");
    printf("            |           |            \n");

    return 0;
}