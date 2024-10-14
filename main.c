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

    char X, O; //
    int field;
    printf("Select your field!\n");
    scanf("%d", &field);

    printf("      1     |     2     |     3     \n");
    printf("- - - - - - - - - - - - - - - - - - \n");
    printf("      4     |     5     |     6     \n");
    printf("- - - - - - - - - - - - - - - - - - \n");
    printf("      7     |     8     |     9     \n");

    printf("\n\n\n\n\n\n\n\n");

    printf("      %d     |          |           \n", field);
    printf("- - - - - - - - - - - - - - - - - - \n");
    printf("            |           |           \n");
    printf("- - - - - - - - - - - - - - - - - - \n");
    printf("            |           |            \n");

    return 0;
}