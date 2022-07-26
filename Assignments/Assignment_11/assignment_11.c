// // C++ Bootcamp Assignment-11 Solved All Questions Here :-
// I Solved All Questions in this Single file :-

// Header Files
#include <stdio.h>
#include <conio.h>

/************** All Functions Declarations (Prototypes) ********************/

// Function to Calculate LCM of Two Numbers
int lcm(int, int);


// Function to Calculate HCF of Two Numbers
int hcf(int, int);


// Function to Check A Number is Prime or Not
int primeOrNot(int);


// Function to Find Next Prime Number of A Given Number
int nextPrimeNumber(int);


// Function to Print First N Prime Numbers
int printFirstNPrimeNumbers(int n);


// Function to Print First N Terms of Fibonacci Series
void printFirstNTermsOfFibonacci(int n);


// Function to Print PASCAL Triangle
void printPascalTriangle(int);


// Function to Find Square of A Number
int square(int);


// Function to Print All Prime Numbers Between Two Given Numbers
void primeNumbersBetweenTwoNumbers(int, int);


// Function to Calculate Factorial to A Number
int factorial(int);

// Function to Find Sum of Series
float sumOfSeries();


// Main Function Start
int main()
{

    // 1. Write A Function to Calculate LCM of Two Numbers (TSRS) :-
    // int num1, num2;
    // printf("Enter Two Numbers:");
    // scanf("%d%d", &num1,&num2);
    // printf("LCM of %d and %d is %d",num1,num2, lcm(num1, num2));



    // 2. Write A Function to Calculate HCF of Two Numbers (TSRS) :-
    // int num1, num2;
    // printf("Enter Two Numbers:");
    // scanf("%d%d", &num1, &num2);
    // printf("HCF of %d and %d is %d", num1, num2, hcf(num1, num2));



    // 3. Write A Function to Check Whether A Given Number is Prime or Not (TSRS) :-
    // int num;
    // printf("Enter A Number:");
    // scanf("%d", &num);
    // primeOrNot(num) ? printf("%d is a Prime Number", num) : printf("%d is Not a Prime Number", num);



    // 4. Write A Function to Find Next Prime Number of A Given Number (TSRS) :-
    // int num;
    // printf("Enter A Number:");
    // scanf("%d", &num);
    // printf("Next Prime Number of %d is %d", num, nextPrimeNumber(num));



    // 5. Write A  Function to Print First N Prime Numbers (TSRN) :-
    // int n;
    // printf("How Many First Prime Numbers You Want to Print:");
    // scanf("%d", &n);
    // printf("First %d Prime Numbers Are:-\n");
    // printFirstNPrimeNumbers(n);



    // 6. Write A Function to Print All Prime Numbers Between Two Given Numbers (TSRN) :-
    // int lowerLimit, upperLimit;
    // printf("Enter Two Numbers to Find All Prime Numbers Between them:");
    // scanf("%d%d", &lowerLimit, &upperLimit);
    // printf("Prime Numbers Between %d and %d:\n", lowerLimit, upperLimit);
    // primeNumbersBetweenTwoNumbers(lowerLimit, upperLimit);



    // 7. Write A  Function to Print First N Terms of Fibonacci Series (TSRN) :-
    // int n;
    // printf("How Many Terms of Fibnacci Series You Want to Print:");
    // scanf("%d", &n);
    // printf("First %d Terms of Fibonacci Series:-\n", n);
    // printFirstNTermsOfFibonacci(n);



    // 8. Write A Function to Print PASCAL Triangle (TSRN) :-
    // int rows;
    // printf("Enter Rows:");
    // scanf("%d", &rows);
    // printf("\n");
    // printf("*********************\n\n");
    // printPascalTriangle(rows);



    // 9. Write A Function to Find Square of A Number :-
    // int num;
    // printf("Enter A Number:");
    // scanf("%d", &num);
    // printf("Square of %d is %d", num, square(num));



    // 10. Write A Function to Find The Sum fo Series 1!/1+2!/3+4!/4+5!/5 :-
    // printf("Sum of Series is %.2f", sumOfSeries());



    getch();
    return 0;
}
// Main Function End

/************* All Functions Definitions ********************/

// Function to Calculate LCM of Two Numbers :-
int lcm(int num1, int num2)
{
    for (int i = num1 > num2 ? num1 : num2; i <= num1 * num2; i += i)
        if (!(i % num1) && !(i % num2))
            return i;
}


// Function to Calculate HCF of Two Numbers :-
int hcf(int num1, int num2)
{
    for (int i = num1 < num2 ? num1 : num2; i >= 1; i--)
        if (!(num1 % i) && !(num2 % i))
            return i;
}


// Function to Check A Number is Prime or Not
int primeOrNot(int num)
{
    for (int i = 2; i <= num / 2; i++)
        if (!(num % i))
            return 0;
    return 1;
}


// Function to Find Next Prime Number of A Given Number
int nextPrimeNumber(int num)
{
    int i, j;
    for (i = num + 1; 1; i++)
    {
        for (j = 2; j <= i / 2; j++)
            if (!(i % j))
                break;
        if (j > i / 2)
            return i;
    }
}


// Function to Print First N Prime Numbers
int printFirstNPrimeNumbers(int n)
{
    int i, j;

    for (i = 2; n; i++)
    {
        for (j = 2; j <= i / 2; j++)
            if (!(i % j))
                break;
        if (j > i / 2)
        {
            printf("%d ", i);
            n--;
        }
    }
}


// Function to Print All Prime Numbers Between Two Given Numbers
void primeNumbersBetweenTwoNumbers(int lowerLimit, int upperLimit)
{
    int i, j;
    for (i = lowerLimit + 1; i < upperLimit; i++)
    {
        for (j = 2; j <= i / 2; j++)
            if (!(i % j))
                break;
        if (j > i / 2)
            printf("%d ", i);
    }
}



// Function to Print First N Terms of Fibonacci Series
void printFirstNTermsOfFibonacci(int n)
{

    int prev = -1, next = 1, result;
    for (; n; n--)
    {
        result = prev + next;
        printf("%d ", result);
        prev = next;
        next = result;
    }
}


// Function to Print PASCAL Triangle
void printPascalTriangle(int rows)
{
    int cols, k, num = 1;
    for (int i = 1; i <= rows; i++)
    {
        cols = k = 1;
        for (int j = 1; j <= rows * 2 - 1; j++)
        {
            if (j >= rows + 1 - i && j <= rows + i - 1 && k)
            {
                int element = factorial(i - 1) / (factorial(cols - 1) * (factorial((i - 1) - (cols - 1))));
                printf("%d", element);
                k = 0;
                cols++;
            }
            else
            {
                printf(" ");
                k = 1;
            }
        }
        printf("\n");
    }
}



// Function to Find Square of A Number
int square(int num)
{
    return num * num;
}


// Function to Calculate Factorial to A Number
int factorial(int num)
{
    if (num == 1 || num == 1)
        return 1;
    int fact = 1;
    for (; num > 1; num--)
        fact *= num;
    return fact;
}



// Function to Find Sum of Series
float sumOfSeries()
{
    float sum = 0;
    for (int i = 1; i <= 5; i++)
    {
        sum += factorial(i) / (float)i;
    }
    return sum;
}