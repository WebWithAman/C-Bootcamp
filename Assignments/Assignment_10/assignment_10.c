// // C++ Bootcamp Assignment-10 Solved All Questions Here :-
// I Solved All Questions in this Single file :-

// Header Files
#include <stdio.h>
#include <conio.h>



/************ All Functions Declarations (Prototypes) ******************/

// Function to Calculate Area of Circle
float areaOfCircle(float);


// Function to Calcualte Simple Interest
float simpleInterest(float, float, float);


// Function to Check A Number is Even or Odd :-
int evenOrOdd(int);


// Function to Print First N Natural Numbers :-
void firstNNaturalNumbers(int);


// Function to Print First N Odd Natural Numbers
void firstNOddNaturalNumbers(int);


// Function to Calculate Factorial to A Number
int factorial(int);


// Function to Check Whether Given Number Contains A Given Digit or Not
int digitPresentOrNot(int, int);


// Function to Print All Prime Factors of  A Number
void printPrimefactors(int);


// Function to Calculate Number of Combinations Can be Made From n Items by Selecting r At A Time
int numberOfCombinations(int, int);


// Function to Calculate Number of Combinations Can be Made From n Items by Selecting r At A Time
int numberOfArrangements(int, int);


// Main Function Start
int main()
{



    // 1. Write A Function to Calculate Area of Circle (TSRS) :-s
    // float radius;
    // printf("Enter Radius of Circle:");
    // scanf("%f", &radius);
    // printf("Area of Circle: %.2f", areaOfCircle(radius));



    // 2. Write A Function to Calculate Simple Interest :-
    // float amount, rate, time;
    // printf("Enter Amount,Rate of Interest and Time:");
    // scanf("%f%f%f", &amount, &rate, &time);
    // printf("Total Interest Amount: %.2f", simpleInterest(amount, rate, time));



    // 3. Write A Function to Check Whether A Given Number is Even or Odd. Return 1 if the Number is Even, otherwise Return 0. (TSRS) :-
    // int num;
    // printf("Enter A Number:");
    // scanf("%d", &num);
    // evenOrOdd(num) ? printf("%d is an Even Number",num) : printf("%d is an Odd Number",num);




    // 4. Write A Function to Print First N Natural Numbers (TSRN) :-
    // int n;
    // printf("How Many First Natural Numbers You Want to Print:");
    // scanf("%d", &n);
    // firstNNaturalNumbers(n);



    // 5. Write A Function to Print First N Odd Natural Numbers (TSRN) :-
    // int n;
    // printf("How Many First Odd Natural Numbers You Want to Print:");
    // scanf("%d", &n);
    // firstNOddNaturalNumbers(n);



    // 6. Write A Fucntion to Calaculate Factorial of A Number (TSRS) :-
    // int num;
    // printf("Enter A Number:");
    // scanf("%d", &num);
    // printf("Factorial of %d is %d",num,factorial(num));



    // 7. Write  A Function to calculate Number of Combinations Can be Made From n Items by Selecting r At A Time (TSRS) :-
    // int n, r;
    // printf("Enter Total Items (Value of n) and Itmes Selected At A Time (Value of r) :");
    // scanf("%d%d", &n, &r);
    // printf("Total Combinations Can be Made :- %d", numberOfCombinations(n, r));



    // 8. Write  A Function to calculate Number of Arrangements Can be Made From n Items by Selecting r At A Time (TSRS) :-
    // int n, r;
    // printf("Enter Total Items (Value of n) and Itmes Selected At A Time (Value of r) :");
    // scanf("%d%d", &n, &r);
    // printf("Total Arrangements Can be Made :- %d", numberOfArrangements(n, r));



    // 9. Write A Function to Check Whether A Given Number Conatins A Given Number or No (TSRS) :-
    // int num, digit;
    // printf("Enter A Number:");
    // scanf("%d", &num);
    // printf("Enter A Digit that You Want to Check, The Number Contains the Digit or Not:");
    // scanf("%d", &digit);
    // digitPresentOrNot(num, digit) ? printf("Yes, Number Conatins the Given Digit") : printf("No, Number Does not Conatins the Given Digit");



    // 10. Write A Function to Print All Prime Factors of A Given Number (TSRN) :-
    // int num;
    // printf("Enter A Number:");
    // scanf("%d", &num);
    // printf("Prime Factors of %d Are :\n", num);
    // printPrimefactors(num);



    getch();
    return 0;
}
// Main Function End



/************ All Functions Definitions *****************/

// Function to Calculate Area of Circle
float areaOfCircle(float radius)
{
    return 3.14 * radius * radius;
}


// Function to Calcualte Simple Interest
float simpleInterest(float amount, float rate, float time)
{
    return amount * rate * time / 100;
}


// Function to Check A Number is Even or Odd
int evenOrOdd(int num)
{
    if (num % 2)
        return 0;
    else
        return 1;
}


// Function to Print First N Natural Numbers
void firstNNaturalNumbers(int n)
{
    for (int i = 1; i <= n; i++)
        printf("%d ", i);
}


// Function to Print First N Odd Natural Numbers
void firstNOddNaturalNumbers(int n)
{
    for (int i = 1; i <= n; i++)
        printf("%d ", 2 * i - 1);
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


// Function to Calculate Number of Combinations Can be Made From n Items by Selecting r At A Time
int numberOfCombinations(int n, int r)
{
    return (factorial(n) / (factorial(r) * factorial(n - r)));
}


// Function to Calculate Number of Arrangements Can be Made From n Items by Selecting r At A Time
int numberOfArrangements(int n, int r)
{
    return (factorial(n) / factorial(n - r));
}


// Function to Check Whether Given Number Contains A Given Digit or Not
int digitPresentOrNot(int num, int digit)
{
    while (num > 0)
    {
        if (digit == num % 10)
            return 1;
        num /= 10;
    }
    return 0;
}


// Function to Print All Prime Factors of  A Number
void printPrimefactors(int num)
{
    for (int i = 2; num > 1; i++)
        for (; num % i == 0; num /= i)
            printf("%d ", i);
}
