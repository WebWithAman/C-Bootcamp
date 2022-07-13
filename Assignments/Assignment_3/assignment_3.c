// All Questions of Assignment-2 C++ Bootcamp
// I Have been Solved All Questions in This Single File :-

// Header File
#include <stdio.h>
#include <conio.h>

// Main function Start
int main()
{

    // 1. WAP to Check a Given Number is Positive or Non-Positive :-
    // int num;
    // printf("Enter A Number:");
    // scanf("%d", &num);
    // if (num > 0)
    //     printf("Entered Number is Positive");
    // else
    //     printf("Entered Number is Non-Positive");

    // 2. WAP to Check a Given is Divisible by 5 or Not :-
    // int num;
    // printf("Enter A Number:");
    // scanf("%d", &num);
    // if (num % 5 == 0)
    //     printf("Divisibe by 5");
    // else
    //     printf("Not Divisible by 5");

    // 3. WAP to Check a Given Number is Even or Odd :-
    // int num;
    // printf("Enter A Number:");
    // scanf("%d", &num);
    // if (num % 2 == 0)
    //     printf("Even Number");
    // else
    //     printf("Odd Number");

    // 4.WAP to Check a Given Number is Even or Odd Without % Operator :-
    // int num;
    // printf("Enter A Number:");
    // scanf("%d", &num);
    // if (num & 1)
    //     printf("Odd Number");
    // else
    //     printf("Even Number");

    // int num, intPart;
    // float quotient;
    // printf("Enter A Number:");
    // scanf("%d", &num);
    // quotient = num / 2.0;
    // intPart = (int)quotient;
    // intPart = (quotient - intPart) * 10;
    // if (intPart > 0)
    //     printf("Odd Number");
    // else
    //     printf("Even Number");

    // 5. WAP to Check a Given Number is a Three Digit Number or Not :-
    // int num, temp;
    // printf("Enter A Number:");
    // scanf("%d", &num);
    // if ((int)(num / 100.0))
    //     printf("Three Digit Number");
    // else
    //     printf("Not A Three Digit Number");

    // 6. WAP to Print Greater Between two Numbers :-
    // int num1,num2;
    // printf("Enter Two Numbers:");
    // scanf("%d %d",&num1,&num2);
    // if(num1 > num2)
    //  printf("%d is Greater",num1);
    // else
    // printf("%d is Greater",num2);

    // 7. Find Roots of a Quadratic Equation are Real and Distinct , Real and Equal or Imaginary :-
    // int a, b, c, discri;
    // printf("Enter Coefficients a,b and c :");
    // scanf("%d%d%d", &a, &b, &c);
    // discri = b * b - 4 * a * c;
    // if (discri > 0)
    //     printf("Roots are Real and Distinct");
    // else if (discri < 0)
    //     printf("Roots are Imaginary");
    // else
    //     printf("Roots are Real and Equal");

    // 8. WAP to Check a Given Year is Leap Year or Not :-
    // unsigned short int year;
    // printf("Enter A Year:");
    // scanf("%hu", &year);

    // if (year % 400 == 0)
    //     printf("%hu is a Leap Year", year);
    // else if (year % 100 == 0)
    //     printf("%hu is not a Leap Year", year);
    // else if (year % 4 == 0)
    //     printf("%hu is a Leap Year", year);
    // else
    //     printf("%hu is not a Leap Year", year);

    // 9. WAP to Print Greatest Among Three Numbers :-
    // int num1, num2, num3;
    // printf("Enter Three Numbers:");
    // scanf("%d%d%d", &num1, &num2, &num3);
    // if (num1 > num2 && num1 > num3)
    //     printf("Greatest Number is: %d", num1);
    // else if (num2 > num3)
    //     printf("Greatest Number is : %d", num2);
    // else
    //     printf("Greatest Number is : %d", num3);

    // 10. WAP Which Takes Cost Price and Selling Price of a Product From User . Calculate and Print Profit or Loss Percentage :-
    // float costPrice, sellPrice, percentage;
    // printf("Enter the Cost Price of Product:");
    // scanf("%f", &costPrice);
    // printf("Enter the Selling Price of Product:");
    // scanf("%f", &sellPrice);
    // percentage = (sellPrice - costPrice) / costPrice * 100;

    // if (percentage < 0)
    // {
    //     percentage = -percentage;
    //     printf("Loss ! of %.2f%%", percentage);
    // }
    // else
    //     printf("Profit ! of %.2f%%", percentage);

    // 11. WAP to Take Marks of 5 Subjects and Assume Marks are Given Out of 100 and Passing Marks are 33.Now Check Whether Candidate Passed or Failed :-
    // int sub1, sub2, sub3, sub4, sub5;
    // printf("Enter Marks of 5 Subjects:");
    // scanf("%d%d%d%d%d", &sub1, &sub2, &sub3, &sub4, &sub5);
    // if (sub1 < 33 || sub2 < 33 || sub3 < 33 || sub4 < 33 || sub5 < 33 )
    //     printf("Candidate have been failed!!");
    // else
    // printf("Candidate have been Passed !!");

    // 12. WAP to Check A Given Alphabet is in Uppercase or Lowercase :-
    // char ch;
    // printf("Enter A Alphabet:");
    // scanf("%c",&ch);
    // if(ch >= 'A' && ch <= 'Z')
    // printf("Entered Alphabet is Uppercase");
    // else
    // printf("Entered Alphabet is Lowercase");

    // 13. WAP to Check A Given Number is Divisible by 3 and 2 :-
    // int num;
    // printf("Enter A Number:");
    // scanf("%d",&num);
    // if (num % 3 == 0 && num % 2 == 0)
    //     printf("Divisible");
    // else
    //     printf("Not Divisible");

    // 14. WAP to Check A Given Number is Divisible by 7 or 3 :-
    // int num;
    // printf("Enter A Number:");
    // scanf("%d",&num);
    // if (num % 7 == 0 || num % 3 == 0)
    //     printf("Divisible");
    // else
    //     printf("Not Divisible");

    // 15. WAP to Check A Given Number is Positive , Negative or Zero :-
    // int num;
    // printf("Enter A Number:");
    // scanf("%d", &num);
    // if (num > 0)
    //     printf("Number is Positive");
    // else if (num < 0)
    //     printf("Number is Negative");
    // else
    //     printf("Number is Zero");

    // 16. WAP to Check Whether A Character is an Alphabet(Uppercase),an Alphabet(Lowecase) ,A Digit or a Special Character :-
    // char ch;
    // printf("Enter A Character:");
    // scanf("%c", &ch);
    // if (ch >= 'A' && ch <= 'Z')
    //     printf("Entered Character is Uppercase Alphabet");
    // else if (ch >= 'a' && ch <= 'z')
    //     printf("Entered Character is Lowercase Alphabet");
    // else if (ch >= '0' && ch >= '9')
    //     printf("Entered Character is Digit");
    // else
    //     printf("Entered Character is Special Character");

    // 18. WAP to Take Month Number and Print Number of Days in That Month :-
    short  month;
    printf("Enter the Number of a Month:");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
        printf("31 Days");
        break;
    case 2:
        printf("28 Days");
        break;
    case 3:
        printf("31 Days");
        break;
    case 4:
        printf("30 Days");
        break;
    case 5:
        printf("31 Days");
        break;
    case 6:
        printf("30 Days");
        break;
    case 7:
        printf("31 Days");
        break;
    case 8:
        printf("31 Days");
        break;
    case 9:
        printf("30 Days");
        break;
    case 10:
        printf("31 Days");
        break;
    case 11:
        printf("30 Days");
        break;
    case 12:
        printf("31 Days");
        break;
    default:
        printf("Invalid Month");
    }
}
    // Main function End