// C++ Bootcamp Assignment-8 Solved All Questions Here :-
// I Solved All Questions in this Single file :-

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{


    // 1. Pattern :-
    // int i, j, rows = 5;
    // for (i = 1; i <= rows; i++)
    // {
    //     for (j = 1; j <= i; j++)
    //         printf("*");
    //     printf("\n");
    // }



    // 2. Pattern :-
    // int i, j, rows = 5;
    // for (i = rows; i >= 1; i--)
    // {
    //     for (j = 1; j <= rows; j++)
    //         j >= i ? printf("*") : printf(" ");
    //     printf("\n");
    // }



    // 3. Pattern :-
    // int i, j, rows = 5;
    // for (i = rows; i >= 1; i--)
    // {
    //     for (j = 1; j <= i; j++)
    //         printf("*");
    //     printf("\n");
    // }



    // 4. Pattern :-
    // int i, j, rows = 5;
    // for (i = 1; i <= rows; i++)
    // {
    //     for (j = 1; j <= rows; j++)
    //         j >= i ? printf("*") : printf(" ");
    //     printf("\n");
    // }



    // 5. Pattern :-
    // int i, j, rows = 5, cols = rows * 2 - 1;
    // for (i = 1; i <= rows; i++)
    // {
    //     for (j = 1; j <= cols; j++)
    //         (j >= rows + 1 - i && j <= rows - 1 + i) ? printf("*") : printf(" ");
    //     printf("\n");
    // }




    // 6. Pattern :-
    // int i, j, rows = 5, cols = rows * 2 - 1;
    // for (i = 1; i <= rows; i++)
    // {
    //     for (j = 1; j <= cols; j++)
    //         (j >= i && j <= cols + 1 - i) ? printf("*") : printf(" ");
    //     printf("\n");
    // }



    // 7. Pattern :-
    // int i, j, rows = 5, cols = rows * 2;
    // for (i = 1; i <= rows; i++)
    // {
    //     for (j = 1; j <= cols; j++)
    //         (j <= rows + 1 - i || j >= rows + i) ? printf("*") : printf(" ");
    //     printf("\n");
    // }



    // 8. Pattern :-
    // int i, j, k, rows = 4, cols = rows * 2 - 1;
    // for (i = 1; i <= rows; i++)
    // {
    //     k = 1;
    //     for (j = 1; j <= cols; j++)
    //         if (j >= rows + 1 - i && j <= rows - 1 + i)
    //         {
    //             printf("%d", k);
    //             j < rows ? k++ : k--;
    //         }
    //         else
    //             printf(" ");
    //     printf("\n");
    // }




    // 9. Pattern :-
    // int i, j, k, rows = 4, cols = rows * 2 - 1;
    // for (i = 1; i <= rows; i++)
    // {
    //     k = 1;
    //     for (j = 1; j <= cols; j++)
    //         if (j >= i && j <= cols + 1 - i)
    //         {
    //             printf("%d", k);
    //             j < rows ? k++ : k--;
    //         }
    //         else
    //             printf(" ");
    //     printf("\n");
    // }



    // 10. Pattern :-
    // int i, j, k, rows = 4, cols = rows * 2 - 1;
    // for (i = 1; i <= rows; i++)
    // {
    //     k = 1;
    //     for (j = 1; j <= cols; j++)
    //     {
    //         if (j <= rows + 1 - i || j >= rows - 1 + i)
    //         {
    //             printf("%d", k);
    //         }
    //         else
    //             printf(" ");
    //         j < rows ? k++ : k--;
    //     }
    //     printf("\n");
    // }



    // 11. Pattern :-
    // int i, j, k, rows = 5, cols = rows * 2 - 1;
    // for (i = 1; i <= rows; i++)
    // {
    //     k = 'A';
    //     for (j = 1; j <= cols; j++)
    //         if (j >= rows + 1 - i && j <= rows - 1 + i)
    //         {
    //             printf("%c", k);
    //             j < rows ? k++ : k--;
    //         }
    //         else
    //             printf(" ");
    //     printf("\n");
    // }



    // 12. Pattern :-
    // int i, j, k, rows = 4, cols = rows * 2 - 1;
    // for (i = 1; i <= rows; i++)
    // {
    //     k = 'A';
    //     for (j = 1; j <= cols; j++)
    //         if (j >= i && j <= cols + 1 - i)
    //         {
    //             printf("%c", k);
    //             j < rows ? k++ : k--;
    //         }
    //         else
    //             printf(" ");
    //     printf("\n");
    // }



    // 13. Pattern :-
    // int i, j, k, rows = 7, cols = rows * 2 - 1;
    // for (i = 1; i <= rows; i++)
    // {
    //     k = 'A';
    //     for (j = 1; j <= cols; j++)
    //     {
    //         if (j <= rows + 1 - i || j >= rows - 1 + i)
    //         {
    //             printf("%c", k);
    //             j < rows ? k++ : k--;
    //         }
    //         else
    //             printf(" ");
    //         k = j == rows && i != 1 ? --k : k;
    //     }
    //     printf("\n");
    // }



    // 14. Pattern :-
    // int i, j, rows = 5;
    // for (i = 1; i <= rows; i++)
    // {
    //     for (j = 1; j <= i; j++)
    //         i != rows ? j == 1 || j == i ? printf("*") : printf(" ") : printf("*");
    //     printf("\n");
    // }



    // 15. Pattern :-
    // int i, j, rows = 5;
    // for (i = rows; i >= 1; i--)
    // {
    //     for (j = 1; j <= rows; j++)
    //         i != 1 ? j == rows || j == i ? printf("*") : printf(" ") : printf("*");
    //     printf("\n");
    // }



    // 16. Pattern :-
    // int i, j, rows = 5, cols = rows * 2 - 1;
    // for (i = 1; i <= rows; i++)
    // {
    //     for (j = 1; j <= cols; j++)
    //         i != rows ? j == rows + 1 - i || j == rows - 1 + i ? printf("*") : printf(" ") : printf("*");
    //     printf("\n");
    // }



    // 17. Pattern :-
    // int i, j, rows = 5, cols = rows * 2 - 1;
    // for (i = 1; i <= rows; i++)
    // {
    //     for (j = 1; j <= cols; j++)
    //         i != 1 ? j == i || j == cols + 1 - i ? printf("*") : printf(" ") : printf("*");
    //     printf("\n");
    // }



    // 18. Pattern :-
    // int i, j, rows = 9, cols = rows, limit1 = rows / 2 + 1, limit2 = limit1;
    // for (i = 1; i <= rows; i++)
    // {
    //     for (j = 1; j <= cols; j++)
    //         j >= limit1 &&j <= limit2 ? printf("*") : printf(" ");
    //     i < 5 ? (limit1--, limit2++) : (limit1++, limit2--);
    //     printf("\n");
    // }



    // 19. Pattern :-
    // int i, j, rows = 13, cols = 19;
    // for (i = 1; i <= rows; i++)
    // {
    //     for (j = 1; j <= cols; j++)
    //     {
    //         if (i <= 3)
    //             if ((j >= 4 - i && j <= 6 + i) || (j >= 14 - i && j <= 16 + i))
    //                 printf("*");
    //             else
    //                 printf(" ");
    //         else if (i == 4)
    //             if (j == 7)
    //                 printf("M");
    //             else if (j == 8)
    //                 printf("y");
    //             else if (j == 9)
    //                 printf("S");
    //             else if (j == 10)
    //                 printf("i");
    //             else if (j == 11)
    //                 printf("r");
    //             else if (j == 12)
    //                 printf("G");
    //             else
    //                 printf("*");
    //         else if (j >= i - 3 && j <= 23 - i)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }
    //     printf("\n");
    // }

    getch();
    return 0;
}
// Main Function End