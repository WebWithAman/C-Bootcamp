// C++ Bootcamp Assignment-16 Solved All Questions Here :-
// I Solved All Questions in this Single file :-



// Header Files
#include <stdio.h>
#include <conio.h>



// Main Function Start
int main()
{




    // 1. WAP to Calculate Sum of Two Matrices Ecah of Order 3 x 3 :-
    // int matrixA[3][3] = {{2, 4, 80}, {23, 25, 27}, {52, 54, 56}};
    // int matrixB[3][3] = {{10, 12, 14}, {20, 22, 24}, {60, 62, 64}};

    // printf("\n\nMatrix A :-\n\n");
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("| ");
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%4d    ", matrixA[i][j]);
    //     }
    //     printf(" |");
    //     printf("\n");
    // }

    // printf("\n\nMatrix B :-\n\n");
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("| ");
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%4d    ", matrixB[i][j]);
    //     }
    //     printf(" |");
    //     printf("\n");
    // }

    // printf("\n\nSum of Matrix A and Matrix B :-\n");
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("| ");
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%4d    ", matrixA[i][j] + matrixB[i][j]);
    //     }
    //     printf(" |");
    //     printf("\n");
    // }





    // 2. WAP to Calculate Product of Two Matrices Ecah of Order 3 x 3 :-
    // int matrixA[3][3] = {{2, 4, 0}, {3, 5, 7}, {2, 5, 9}};
    // int matrixB[3][3] = {{1, 2, 14}, {0, 2, 4}, {6, 2, 6}};

    // printf("\n\nMatrix A :-\n\n");
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("| ");
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%4d    ", matrixA[i][j]);
    //     }
    //     printf(" |");
    //     printf("\n");
    // }

    // printf("\n\nMatrix B :-\n\n");
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("| ");
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%4d    ", matrixB[i][j]);
    //     }
    //     printf(" |");
    //     printf("\n");
    // }

    // printf("\n\nProduct of Matrix A and Matrix B :-\n");
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("| ");
    //     for (int j = 0; j < 3; j++)
    //     {
    //         int sum = 0;
    //         for (int k = 0; k < 3; k++)
    //         {
    //             sum += matrixA[i][k] * matrixB[k][j];
    //         }
    //         printf("%4d    ", sum);
    //     }
    //     printf(" |");
    //     printf("\n");
    // }



    // 3. WAP to Find the Transpose of Given Matrix :-
    // int m, n;
    // printf("Enter Order of A Matrix (Rows and Columns) :-\n");
    // scanf("%d%d", &m, &n);

    // int matrixA[m][n];
    // printf("Enter Elements of Matrix of Order (%d x %d) :-\n", m, n);
    // for (int i = 0; i < m; i++)
    //     for (int j = 0; j < n; j++)
    //         scanf("%d", &matrixA[i][j]);

    // printf("\n\nMatrix A of Order (%d x %d) :-\n\n",m,n);
    // for (int i = 0; i < m; i++)
    // {
    //     printf("| ");
    //     for (int j = 0; j < n; j++)
    //     {
    //         printf("%4d    ", matrixA[i][j]);
    //     }
    //     printf(" |");
    //     printf("\n");
    // }

    // printf("\n\nTranspose of Matrix A Order Became (%d x %d) :-\n\n",n,m);
    // for (int i = 0; i < n; i++)
    // {
    //     printf("| ");
    //     for (int j = 0; j < m; j++)
    //     {
    //         printf("%4d    ", matrixA[j][i]);
    //     }
    //     printf(" |");
    //     printf("\n");
    //}




    // 4. Write A Program to Find The Sum of Right Diagonals of A Matrix :-
    // int matrixA[3][3] = {{2, 4, 80}, {23, 25, 27}, {52, 54, 56}};
    // int sum = 0;

    // printf("\n\nMatrix A :-\n\n");
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("| ");
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%4d    ", matrixA[i][j]);
    //         if(j == 3-i-1)
    //          sum+=matrixA[i][j];
    //     }
    //     printf(" |");
    //     printf("\n");
    // }

    // printf("\nSum of Right Diagonals of Matrix A :- %d", sum);




    // 5. Write A Program to Find The Sum of Left Diagonals of A Matrix :-
    // int matrixA[3][3] = {{2, 4, 80}, {23, 25, 27}, {52, 54, 56}};
    // int sum = 0;

    // printf("\n\nMatrix A :-\n\n");
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("| ");
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%4d    ", matrixA[i][j]);
    //         if(i == j)
    //          sum+=matrixA[i][j];
    //     }
    //     printf(" |");
    //     printf("\n");
    // }

    // printf("\nSum of Left Diagonals of Matrix A :- %d", sum);



    // 6. WAP to Calculate Sum of Rows and Columns Matrices Ecah of Order 3 x 3 :-
    // int matrixA[3][4] = {{2, 4, 80, 4}, {23, 6, 25, 27}, {52, 8, 54, 56}};
    // int rowsSum = 0, colsSum = 0;

    // printf("\n\nMatrix A :-\n\n");
    // for (int i = 0; i < 3; i++)
    // {
    //     rowsSum = 0;
    //     printf("| ");
    //     for (int j = 0; j < 4; j++)
    //     {
    //         printf("%4d    ", matrixA[i][j]);
    //     }
    //     printf(" |");
    //     printf("\n");
    // }

    // printf("\n\n******* Sum of Rows *******\n");
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         rowsSum += matrixA[i][j];
    //     }
    //     printf("Sum of Row %d. => %d\n", i + 1, rowsSum);
    // }

    // printf("\n\n******* Sum of Columns *******\n");
    // for (int i = 0; i < 4; i++)
    // {
    //     colsSum=0;
    //     for (int j = 0; j < 3; j++)
    //     {
    //         colsSum += matrixA[j][i];
    //     }
    //     printf("Sum of Column %d. => %d\n", i + 1, colsSum);
    // }




    // 7. Write A Program to Print Lower Triangular of A Given Matrix :-
    // int m, n;
    // printf("Enter Order of A Matrix (Rows and cols) Order Should be Same :-\n");
    // scanf("%d%d", &m, &n);
    // if (m == n)
    // {
    //     int matrixA[m][n];
    //     printf("Enter Elements of Matrix of Order (%d x %d) :-\n", m, n);
    //     for (int i = 0; i < m; i++)
    //         for (int j = 0; j < n; j++)
    //             scanf("%d", &matrixA[i][j]);
    //     printf("Lower Triangle of Matrix :-\n");
    //     for (int i = 0; i < m; i++)
    //     {
    //         printf("| ");
    //         for (int j = 0; j < n; j++)
    //         {
    //             if (i > j)
    //                 printf("%4d    ", matrixA[i][j]);
    //             else
    //                 printf("        ");
    //         }
    //         printf(" |");
    //         printf("\n");
    //     }
    // }

    // else
    // printf("Order Not Matched !!");





    // 8. Write A Program to Print Upper Triangular of A Given Matrix :-
    // int m, n;
    // printf("Enter Order of A Matrix (Rows and cols) Order Should be Same :-\n");
    // scanf("%d%d", &m, &n);

    // if (m == n)
    // {
    //     int matrixA[m][n];
    //     printf("Enter Elements of Matrix of Order (%d x %d) :-\n", m, n);
    //     for (int i = 0; i < m; i++)
    //         for (int j = 0; j < n; j++)
    //             scanf("%d", &matrixA[i][j]);
    //     printf("Upper Triangle of Matrix :-\n");
    //     for (int i = 0; i < m; i++)
    //     {
    //         printf("| ");
    //         for (int j = 0; j < n; j++)
    //         {
    //             if (i < j)
    //                 printf("%4d    ", matrixA[i][j]);
    //             else
    //                 printf("        ");
    //         }
    //         printf(" |");
    //         printf("\n");
    //     }
    // }

    // else
    //     printf("Order Not Matched !!");




    // 9. WAP to Accept  A Matrix and Determine Whether It is  A Sparse Matrix :-
    // int m, n, countZeros = 0;
    // printf("Enter Order of A Matrix (Rows and cols) :-\n");
    // scanf("%d%d", &m, &n);

    // int matrixA[m][n];
    // printf("Enter Elements of Matrix of Order (%d x %d) :-\n", m, n);
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         scanf("%d", &matrixA[i][j]);
    //         if (matrixA[i][j] == 0)
    //             countZeros++;
    //     }
    // }

    // printf("\n\nMatrix A :-\n\n", m, n);
    // for (int i = 0; i < m; i++)
    // {
    //     printf("| ");
    //     for (int j = 0; j < n; j++)
    //     {
    //         printf("%4d    ", matrixA[i][j]);
    //     }
    //     printf(" |");
    //     printf("\n");
    // }

    // if (countZeros > m * n / 2)
    //     printf("\n\nEntered Matrix is A Sparse Matrix");
    // else
    //     printf("\n\nEntered Matrix is Not A Sparse Matrix");




    // 10. WAP to Find Row with Maximum Number of 1s :-
    // int countOnes = 0, maxOnesRow = -1, saveOnes = 0;
    // int matrixA[4][4] = {{17, 10, 1, 4}, {11, 1, 1, 1}, {1, 0, 54, 56}, {1, 7, 1, 7}};

    // printf("\n\nMatrix A :-\n\n");
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("| ");
    //     countOnes = 0;
    //     for (int j = 0; j < 4; j++)
    //     {
    //         printf("%4d    ", matrixA[i][j]);
    //         if (matrixA[i][j] == 1)
    //             countOnes++;
    //     }
    //     if (countOnes > saveOnes)
    //         maxOnesRow = i + 1;
    //     saveOnes = countOnes;
    //     printf(" |");
    //     printf("\n");
    // }

    // if (maxOnesRow != -1)
    //     printf("\nThe Row has Maximum Number of 1s :- %d", maxOnesRow);
    // else
    //     printf("\nThere is No Row Containing 1");



    getch();
    return 0;
}
// Main Function End