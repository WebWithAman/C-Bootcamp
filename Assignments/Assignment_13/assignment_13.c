// // C++ Bootcamp Assignment-13 Solved All Questions Here :-
// I Solved All Questions in this Single file :-

// Header Files
#include <stdio.h>
#include <conio.h>

/************** All Functions Declarations (Prototypes) ********************/

// Recursive Function to Calculate Sum of First N Natural Numbers :
int sumOfFirstNNaturalNumbers(int);

// Recursive Function to Calculate Sum of First N Odd Natural Numbers :
int sumOfFirstNOddNaturalNumbers(int);

// Recursive Function to Calculate Sum of First N Even Natural Numbers :
int sumOfFirstNEvenNaturalNumbers(int);

// Recursive Function to Calculate Square of First N Natural Numbers
int sumOfSquareOfNNaturalNumbers(int);

// Recursive Function to Calculate Sum of Digits of A Number:
int sumOfDigits(int);

// Recursive Function to Calculate Factorial to A Number
int factorial(int);

// Recursive Function to Calculate HCF of Two Numbers
int hcf(int, int);

// Recursive Function to Print First N Terms of Fibonacci Series
int firstnTermsOfFibonacciSeries(int);

// Recursive Function to Count Digits In A Number
int countDigitsInNumber(int);

// Recursive Function to calculate Power of A Any Number
int calculatePower(int, int);

// Main Function Start
int main()
{

    // 1. Write A Recursive Function to Calculate Sum of First N Natural Numbers :
    // int n;
    // printf("How Many First Natural Numbers You Want to Add:");
    // scanf("%d", &n);
    // printf("Sum of First %d Natural Numbers: %d", n, sumOfFirstNNaturalNumbers(n));

    // 2. Write A Recursive Function to Calculate Sum of First N Odd Natural Numbers :
    // int n;
    // printf("How Many First Odd Natural Numbers You Want to Add:");
    // scanf("%d", &n);
    // printf("Sum of First %d Odd Natural Numbers: %d", n, sumOfFirstNOddNaturalNumbers(n));

    // 3. Write A Recursive Function to Calculate Sum of First N Even Natural Numbers :
    // int n;
    // printf("How Many First Even Natural Numbers You Want to Add:");
    // scanf("%d", &n);
    // printf("Sum of First %d Even Natural Numbers: %d", n, sumOfFirstNEvenNaturalNumbers(n));

    // 4. Write A Recursive Function to Print Square of First N Natural Numbers :-
    // int n;
    // printf("How Many Numbers:");
    // scanf("%d", &n);
    // printf("Sum of Squares of First %d Natural Numbers: %d", n, sumOfSquareOfNNaturalNumbers(n));

    // 5. Write a Function to Calculate Sum of Digits of A Number:
    // int num;
    // printf("Enter a Number:");
    // scanf("%d", &num);
    // printf("Sum of Digits of Entered Number: %d", sumOfDigits(num));

    // 6. Write A Recursive Function to Calculate Factorial to A Number :-
    // int num;
    // printf("Enter A Number:");
    // scanf("%d", &num);
    // printf("Factorial of %d is %d", num, factorial(num));

    // 7. Write A Recursive Function to Calculate HCF of Two Numbers :-
    // int num1, num2;
    // printf("Enter Two Numbers:");
    // scanf("%d%d", &num1, &num2);
    // printf("HCF of %d and %d is %d", num1, num2, hcf(num1, num2));

    // 8. Write A Recursive Function to Print First N Terms of Fibonacci Series :-
    // int n;
    // printf("How Many Terms:");
    // scanf("%d", &n);
    // printf("First 5d Terms of Fibonacci Series:-\n");
    // for (int i = 1; i <= n; i++)
    //     printf("%d ", firstnTermsOfFibonacciSeries(i));

    // 9. Write A Recursive Function to Count Digits In A Number :-
    // int num;
    // printf("Enter A  Number:");
    // scanf("%d", &num);
    // printf("Digits In Entered Number: %d", countDigitsInNumber(num));

    // 10. Write A Recursive Function to calculate Power of A Any Number :-
    // int base, power;
    // printf("Enter Base and Power:");
    // scanf("%d%d", &base, &power);
    // printf("%d Raised to Power %d is %d", base, power, calculatePower(base, power));

    getch();
    return 0;

}
// Main Function End

/************* All Functions Definitions ********************/

// Recursive Function to Calculate Sum of First N Natural Numbers :
int sumOfFirstNNaturalNumbers(int n)
{
    if (n == 1)
        return 1;
    return n + sumOfFirstNNaturalNumbers(n - 1);
}

// Recursive Function to Calculate Sum of First N Odd Natural Numbers :
int sumOfFirstNOddNaturalNumbers(int n)
{
    if (n == 1)
        return 1;
    return n * 2 - 1 + sumOfFirstNOddNaturalNumbers(n - 1);
}

// Recursive Function to Calculate Sum of First N Even Natural Numbers :
int sumOfFirstNEvenNaturalNumbers(int n)
{
    if (n == 1)
        return 2;
    return n * 2 + sumOfFirstNEvenNaturalNumbers(n - 1);
}

int sumOfSquareOfNNaturalNumbers(int n)
{
    if (n == 1)
        return 1;
    return n * n + sumOfSquareOfNNaturalNumbers(n - 1);
}

// Recursive Function to Calculate Sum of Digits of A Number:
int sumOfDigits(int num)
{
    if (num == 0)
        return 0;
    return num % 10 + sumOfDigits(num / 10);
}

// Recursive Function to Calculate Factorial to A Number
int factorial(int num)
{
    if (num == 0 || num == 1)
        return 1;
    return num * factorial(num - 1);
}

// Recursive Function to Calculate HCF of Two Numbers
int hcf(int num1, int num2)
{
    int divisor, dividend, remainder;
    divisor = num1 < num2 ? num1 : num2;
    dividend = num1 > num2 ? num1 : num2;
    remainder = dividend % divisor;
    if (remainder == 0)
        return divisor;
    hcf(remainder, divisor);
}

// Recursive Function to Print First N Terms of Fibonacci Series
int firstnTermsOfFibonacciSeries(int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    return firstnTermsOfFibonacciSeries(n - 1) + firstnTermsOfFibonacciSeries(n - 2);
}

// Recursive Function to Count Digits In A Number
int countDigitsInNumber(int num)
{
    int count = 0;
    if (num > 0)
        count++;
    else
        return 0;
    return count + countDigitsInNumber(num / 10);
}

// Recursive Function to calculate Power of A Any Number
int calculatePower(int base, int power)
{

    if (power == 1)
        return base;
    return base * calculatePower(base, --power);
}
