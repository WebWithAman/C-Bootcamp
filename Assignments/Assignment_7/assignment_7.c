// C++ Bootcamp Assignment-7 Solved All Questions Here :-
// I Solved All Questions in this Single file :-

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{



    // 1. WAP to Find NTh Term of Fibonnaci Series :-
    // int prev, next, result, n, count;
    // printf("Which Term of Fibonnaci Series You Want:");
    // scanf("%d", &n);
    // for (prev = -1, next = 1, count = 0; count != n; count++)
    // {
    //     result = next + prev;
    //     prev = next;
    //     next = result;
    // }
    // printf("%dth Term of Fibonnaci Series is : %d", n, result);



    // 2. WAP to Print First N Terms of Fibonnaci Series :-
    // int prev, next, result, n, count;
    // printf("How Many Terms of Fibonnaci Series You Want to Print:");
    // scanf("%d", &n);
    // printf("First %d Terms of Fibonnaci Series are :-\n", n);
    // for (prev = -1, next = 1, count = 0; count != n; count++)
    // {
    //     result = next + prev;
    //     prev = next;
    //     next = result;
    //     printf("%d ", result);
    // }



    // 3. WAP to Check Whether A Given Numbe is there in Fibonnaci Series or Not :-
    // int prev, next, result, n;
    // printf("Enter A Number to Check that the Number is  in Fibonnaci Series or Not:");
    // scanf("%d", &n);
    // for (prev = -1, next = 1; result < n;)
    // {
    //     result = next + prev;
    //     prev = (next + result) - (next = result);
    // }
    // result == n ? printf("%d is in Fibonnaci Series", n) : printf("%d is not in Fibonnaci Series", n);



    // 4. WAP to Calculate HCF of Two Numbers :-
    // int i, num1, num2, hcf;
    // printf("Enter Two Numbers to Find HCF:");
    // scanf("%d%d", &num1, &num2);
    // for (i = num1 < num2 ? num1 : num2; i >= 1; i--)
    //     if (num1 % i == 0 && num2 % i == 0)
    //         break;
    // printf("HCF of %d and %d is: %d", num1, num2, i);



    // 5. WAP to Check Whether Two Given Numbers are Co-Prime or Not :-
    // int num1, num2, i;
    // printf("Enter Two Numbers to Check Co-Prime or Not:");
    // scanf("%d%d", &num1, &num2);
    // int smallest = num1 < num2 ? num1 : num2;
    // for (i = 2; i <= smallest; i++)
    //     if (num1 % i == 0 && num2 % i == 0)
    //         break;
    // smallest < i ? printf("%d and %d Are  Co-Prime Numbers", num1, num2) : printf("%d and %d Are Not Co-Prime Numbers", num1, num2);



    // 6. WAP to Print All Prime Numbers Under 100 :-
    // int i, j;
    // printf("All Prime Numbers Under 100 Are:-\n");
    // for (i = 2; i <= 100; i++)
    // {
    //     for (j = 2; j < i; j++)
    //         if (!(i % j))
    //             break;
    //     if (j == i)
    //         printf("%d ", i);
    // }



    // 7. WAP to Print All Prime Numbers Between Two Given Numbers :-
    // int upper, lower, i, j;
    // printf("Enter Two Numbers to Print All Prime Numbers Between Them:");
    // scanf("%d%d", &lower, &upper);
    // printf("All Prime Numbers Between %d and %d  Are:-\n", lower, upper);
    // for (i = lower; i <= upper; i++)
    // {
    //     for (j = 2; j < i; j++)
    //         if (!(i % j))
    //             break;
    //     if (j == i)
    //         printf("%d ", i);
    // }



    // 8. WAP to Find Next Prime Number Than You Enter :-
    // int i, j, num;
    // printf("Enter A Number to Find Next Prime Number Than You Enter:");
    // scanf("%d", &num);
    // for (i = num + 1; 1; i++)
    //     if (i % 2)
    //     {
    //         for (j = 2; j < i; j++)
    //             if (!(i % j))
    //                 break;

    //         if (j == i)
    //         {
    //             printf("%d ", i);
    //             break;
    //         }
    //     }



    // 9. WAP to Check Whether A Given Number is An Armstrong Number or Not:-
    // int num, copyNum, rem, sum = 0, totalDigits = 0, temp, powerResult;
    // printf("Enter A Number to Check it is an Armstrong Number or Not:");
    // scanf("%d", &num);
    // copyNum = num;
    // for (; num /= 10; totalDigits++)
    //     ;
    // totalDigits++;
    // num = copyNum;
    // while (num > 0)
    // {
    //     temp = totalDigits;
    //     powerResult = 1;
    //     rem = num % 10;
    //     while (temp--)
    //         powerResult *= rem;
    //     sum += powerResult;
    //     num /= 10;
    // }
    // copyNum == sum ? printf("%d is an Armstrong Number", copyNum):printf("%d is Not an Armstrong Number", copyNum);



    // 10. WAP to Print ALL Armstrong Numbers Under 1000 :-
    // int i, num, rem, sum, totalDigits, temp, powerResult;
    // printf("All Armstrong Numbers Under 1000 Are:");
    // for (i = 0; i < 1000; i++)
    // {
    //     totalDigits = sum = 0;
    //     num = i;
    //     for (; num /= 10; totalDigits++)
    //         ;
    //     totalDigits++;
    //     num = i;
    //     while (num > 0)
    //     {
    //         temp = totalDigits;
    //         powerResult = 1;
    //         rem = num % 10;
    //         while (temp--)
    //             powerResult *= rem;
    //         sum += powerResult;
    //         num /= 10;
    //     }
    //     i == sum ? printf("%d ", i) : 1;
    // }

    getch();
    return 0;
}
// Main Function End