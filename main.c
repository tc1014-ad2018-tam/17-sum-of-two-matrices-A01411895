//Luis Ignacio Acosta Zamora A01411895
/*
 * Write a program that reads two matrices of n x n elements each.
 * Produce a third matrix with the sum of both matrices.
 * n should be greater than 1 and less than or equals to 10.
 */

#include <stdio.h>

int main() {

    //State the purpose of the program to the user.
    printf("This program will request you to form 2 matrices of the same length, then it will add them both.\n");

    int s;

    //Do while loop to ask for the size n of the matrix, if it is not between 1  and 10, it repeats itself.
    do {
        printf("State the size n of the matrix(note that the matrix will for n x n): \n");
        scanf("%d", &s);

        if (s < 2 || s > 10){
            printf("The size of the matrix must be a value between 2 and 10. Try again.\n");
        }
    }while(s < 2 || s > 10);


    //Forming the matrices we are going to use.
    double a[s][s];
    double b[s][s];
    double c[s][s];

    int totalSize = s * s;
    int count = 0;

    //Ask the user to fill the matrix.
    printf("\nPlease fill the matrix 'a' with a total of %d numbers.\n", totalSize);
    for (int x = 0; x < s; x++) {
        for (int y = 0; y < s; y++) {
            printf("Please give me a number: ");
            scanf("%lf", &a[x][y]);
        }
    }

    //Print the first matrix.
    printf("\nThis is matrix 'a'.\n");
    for (int x = 0; x < s; x++) {
        for (int y = 0; y < s; y++) {
            printf("\t%lf", a[x][y]);
        }
        printf("\n");
    }

    //Ask the user to fill the matrix.
    printf("\nPlease fill the matrix 'b' with a total of %d numbers.\n", totalSize);
    for (int x = 0; x < s; x++) {
        for (int y = 0; y < s; y++) {
            printf("Please give me a number: ");
            scanf("%lf", &b[x][y]);
        }
    }

    //Print the first matrix.
    printf("\nThis is matrix 'b'.\n");
    for (int x = 0; x < s; x++) {
        for (int y = 0; y < s; y++) {
            printf("\t%lf", b[x][y]);
        }
        printf("\n");
    }

    //Add both matrices into a new one.
    for (int x = 0; x < s; x++) {
        for (int y = 0; y < s; y++) {
            c[x][y] = a[x][y] + b[x][y];
        }
    }

    //Print the new matrix
    printf("\nThe the new matrix 'c', which is the sum of the values in matrices 'a' and 'b' is: \n");
    for (int x = 0; x < s; x++) {
        for (int y = 0; y < s; y++) {
            printf("\t%lf", c[x][y]);
        }
        printf("\n");
    }

    /*// Resets counter
    count = 0;

    // Same job as before...
    printf("\nPlease write %d int number for matrix B.\n", totalSize);
    for (int x = 0; x < length; x++) {
        for (int y = 0; y < length; y++) {
            printf("Number %d =", ++count);
            scanf("%d", &b[x][y]);

            // Adding all numbers and saving them into C matrix
            c[x][y] = a[x][y] + b[x][y];
        }
    }

    // Now, iterate through C and print all its values
    printf("\nSum of the elements of A and B:\n");
    for (int x = 0; x < length; x++) {
        for (int y = 0; y < length; y++) {
            printf("%d + %d = %d\n", a[x][y], b[x][y], c[x][y]);
        }
    }*/


    return 0;
}