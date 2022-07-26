// // C++ Bootcamp Assignment-12 Solved All Questions Here :-
// I Solved All Questions in this Single file :-

// Header Files
#include <stdio.h>
#include <conio.h>


/************** All Functions Declarations (Prototypes) ********************/

// Recursive Function to Print First N Natural Numbers
void firstNNaturalNumbers(int);


// Recursive Function to Print First N Natural Numbers In Reverse Order
void firstNNaturalNumbersInReverse(int);


// Recursive Function to Print First N Odd Natural Numbers
void firstNOddNaturalNumbers(int);


// Recursive Function to Print First N Odd Natural Numbers In Reverse Order
void firstNOddNaturalNumbersInReverse(int);


// Recursive Function to Print First N Even Natural Numbers
void firstNEvenNaturalNumbers(int);


// Recursive Function to Print First N Even Natural Numbers In Reverse Order
void firstNEvenNaturalNumbersInReverse(int);


// Recursive Function to Print Square of First N Natural Numbers
void squareOfNNaturalNumbers(int);


// Recursive Function to Print Binary of A Decimal Number
void decimalToBinary(int);


// Recursive Function to Print Octal of A Decimal Number
void octalToBinary(int);


// Recursive Function to Print Reverse of A Given Number
void reverseNumber(int);


// Main Function Start
int main()
{


    // 1. Write A Recursive Function to Print First N Natural Numbers :-
    // int n;
    // printf("How Many First Natural Numbers You Wan to Print:");
    // scanf("%d", &n);
    // printf("First %d Natural Numbers:\n",n);
    // firstNNaturalNumbers(n);



    // 2. Write A Recursive Function to Print First N Natural Numbers In Reverse Order :-
    // int n;
    // printf("How Many First Natural Numbers You Wan to Print In Reverse Order:");
    // scanf("%d", &n);
    // printf("First %d Natural Numbers In Reverse Order:\n", n);
    // firstNNaturalNumbersInReverse(n);



    // 3. Write A Recursive Function to Print First N Odd Natural Numbers :-
    // int n;
    // printf("How Many First Odd Natural Numbers You Wan to Print:");
    // scanf("%d", &n);
    // printf("First %d Odd Natural Numbers:\n", n);
    // firstNOddNaturalNumbers(n);



    // 4. Write A Recursive Function to Print First N Odd Natural Numbers In Reverse Order :-
    // int n;
    // printf("How Many First Odd Natural Numbers You Wan to Print In Reverse Order:");
    // scanf("%d", &n);
    // printf("First %d Odd Natural Numbers In Reverse Order:\n", n);
    // firstNOddNaturalNumbersInReverse(n);



    // 5. Write A Recursive Function to Print First N Even Natural Numbers :-
    // int n;
    // printf("How Many First Even Natural Numbers You Wan to Print:");
    // scanf("%d", &n);
    // printf("First %d Even Natural Numbers:\n", n);
    // firstNEvenNaturalNumbers(n);



    // 6. Write A Recursive Function to Print First N Even Natural Numbers In Reverse Order :-
    // int n;
    // printf("How Many First Even Natural Numbers You Wan to Print In Reverse Order:");
    // scanf("%d", &n);
    // printf("First %d Even Natural Numbers In Reverse Order:\n", n);
    // firstNEvenNaturalNumbersInReverse(n);



    // 7. Write A Recursive Function to Print Square of First N Natural Numbers :-
    // int n;
    // printf("How Many Numbers:");
    // scanf("%d", &n);
    // printf("Square of First %d Natural Numbers :\n", n);
    // squareOfNNaturalNumbers(n);



    // 8. Write A Recursive Function to Print Binary of A Decimal Number
    // int num;
    // printf("Enter A Number:");
    // scanf("%d", &num);
    // decimalToBinary(num);



    // 9. Write A Recursive Function to Print Octal of A Decimal Number
    // int num;
    // printf("Enter A Number:");
    // scanf("%d", &num);
    // octalToBinary(num);



    // 10. Write A Recursive Function to Print Reverse of A Given Number
    // int num;
    // printf("Enter A Number:");
    // scanf("%d", &num);
    // reverseNumber(num);

    getch();
    return 0;

}
// Main Function End



/************* All Functions Definitions ********************/



// Recursive Function to Print First N Natural Numbers
void firstNNaturalNumbers(int n)
{
    if (n > 0)
    {
        firstNNaturalNumbers(n - 1);
        printf("%d ", n);
    }
}



// Recursive Function to Print First N Natural Numbers In Reverse Order
void firstNNaturalNumbersInReverse(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        firstNNaturalNumbersInReverse(n - 1);
    }
}



// Recursive Function to Print First N Odd Natural Numbers
void firstNOddNaturalNumbers(int n)
{
    if (n > 0)
    {
        firstNOddNaturalNumbers(n - 1);
        printf("%d ", n * 2 - 1);
    }
}



// Recursive Function to Print First N Odd Natural Numbers In Reverse Order
void firstNOddNaturalNumbersInReverse(int n)
{
    if (n > 0)
    {
        printf("%d ", n * 2 - 1);
        firstNOddNaturalNumbersInReverse(n - 1);
    }
}



// Recursive Function to Print First N Even Natural Numbers
void firstNEvenNaturalNumbers(int n)
{
    if (n > 0)
    {
        firstNEvenNaturalNumbers(n - 1);
        printf("%d ", n * 2);
    }
}



// Recursive Function to Print First N Even Natural Numbers In Reverse Order
void firstNEvenNaturalNumbersInReverse(int n)
{
    if (n > 0)
    {
        printf("%d ", n * 2);
        firstNEvenNaturalNumbersInReverse(n - 1);
    }
}



// Recursive Function to Print Square of First N Natural Numbers
void squareOfNNaturalNumbers(int n)
{
    if (n > 0)
    {
        squareOfNNaturalNumbers(n - 1);
        printf("%d ", n * n);
    }
}



// Recursive Function to Print Binary of A Decimal Number
void decimalToBinary(int num)
{
    if (num > 0)
    {
        decimalToBinary(num / 2);
        printf("%d", num % 2);       
    }
}



// Recursive Function to Print Octal of A Decimal Number
void octalToBinary(int num)
{
    if (num > 0)
    {   
        octalToBinary(num / 8);
         printf("%d", num % 8);
    }
}



// Recursive Function to Print Reverse of A Given Number
void reverseNumber(int num)
{
    if (num > 0)
    {
        printf("%d", num % 10);
        reverseNumber(num / 10);
    }
}