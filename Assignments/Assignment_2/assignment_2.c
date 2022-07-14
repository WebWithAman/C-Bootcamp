// All Assignment Questions of Assignment-2 of C++ Bootcamp
// I Solved All Questions in this Single File :-

// Header Files
#include <stdio.h>
#include <conio.h>


// Main Function Start
int main()
{

    // 1. WAP to Print Unit Digit of A Given Number :-
    // int num , unitDigit;
    // printf("Enter A Number:");
    // scanf("%d",&num);
    // unitDigit = num % 10;
    // printf("Unit Digit of %d is: %d",num,unitDigit);
    
    
    

    // 2. WAP to Print A Given Number Without Its Last Digit :-
    // int num;
    // printf("Enter A Number:");
    // scanf("%d",&num);
    // num = num / 10;
    // printf("Entered Number Without Last Digit: %d",num);
    
    
    

    // 3. WAP to Swap Value of Two int Variables :-
    // int num1, num2, temp;
    // printf("Enter Two Numbers:");
    // scanf("%d%d", &num1, &num2);
    // printf("Before Swaping , num1 = %d and num2 = %d\n", num1, num2);
    // temp = num1;
    // num1 = num2;
    // num2 = temp;
    // printf("After  Swaping , num1 = %d and num2 = %d", num1, num2);
    
    

    // 4. WAP to Swap Value of Two int Variables Without Using Third Variables  :-
    // int num1, num2;
    // printf("Enter Two Numbers:");
    // scanf("%d%d", &num1, &num2);
    // printf("Before Swaping , num1 = %d and num2 = %d\n", num1, num2);
    // num1 = num1 + num2;
    // num2 = num1 - num2;
    // num1 = num1 - num2;
    // printf("After  Swaping , num1 = %d and num2 = %d", num1, num2);
    
    

    // 5. WAP to Input Three digit Number and Display Sum  of The Digits :-
    // int num,sum=0,rem;
    // printf("Enter A Three Digit Number:");
    // scanf("%d",&num);
    // sum+= num % 10;
    // num/=10;
    // sum+= num % 10;
    // num/=10;
    // sum+= num % 10;
    // num/=10;
    // printf("Sum of Digits: %d",sum);
    
    

    // 6. WAP to Take A character and Print its ASCII Code :-
    // char ch;
    // printf("Enter A Character:");
    // scanf("%c",&ch);
    // printf("ASCII Code of %c is %d",ch,ch);
    
    

    // 7. WAP to Find the Position of First 1 in LSB :-
    // int num,position=0,lsb;
    // printf("Enter A  Number:");
    // scanf("%d",&num);
    // while(num != 0){
    //     lsb = num & 1;
    //     position++;
    //     if(lsb == 1)
    //       break;
    //     num = num >> 1;
    // }
    // printf("Position of First 1 From LSB is : %d",position);
    
    
    

    // 8. Write A Program to Check Whether a Given Number is Even or Odd Using a Bitwise Operator:-
    // int num;
    // printf("Enter A  Number:");
    // scanf("%d", &num);
    // if (num & 1)
    //     printf("Odd Number");
    // else
    //     printf("Even Number");
    
    
    

    // 9. WAP to Print Size of an int , a Float , a Char and a Double Type Variable :-
    // int in;
    // char ch;
    // float ft;
    // double db;
    // printf("Size of int Variable: %d Byte\n", sizeof(in));
    // printf("Size of char Variable: %d Byte\n", sizeof(ch));
    // printf("Size of float Variable: %d Byte\n", sizeof(ft));
    // printf("Size of double Variable: %d Byte\n", sizeof(db));
    
    

    // 10. WAP to Make a Last digit of A Number Stpred in a Variable as Zero (Ex: if x = 2345 then make it x = 2340) :-
    // int num;
    // printf("Enter A Number:");
    // scanf("%d",&num);
    // num = num - num % 10;
    // printf("After Making Last Digit Zero: %d",num);
    
    
    

    // 11. WAP to Input a Number From User and Also a Digit . Append a Digit in the Number and Print the Resulting Number (Ex: number = 243 and Digit = 9 then make it number = 2439) :-

    // int num,digit;
    // printf("Enter A Number:");
    // scanf("%d",&num);
    // printf("Enter A Digit Which You Want to Append With Number:");
    // scanf("%d",&digit);
    // num = num * 10 + digit;
    // printf("After Appending Digit in Number: %d",num);




    // 12. Assume Price of 1 USD is INR 76.23 . WAP to Take Amount in INR and Conver it into USD :-
    // float INR , USD;
    // printf("Enter Amount in INR :");
    // scanf("%f",&INR);
    // USD = INR / 76.33;
    // printf("Converted in USD :%.2f",USD);
    
    

    // 13. WAP to Take Three Digit Number And Rotate its Digits by 1 towards Right :-
    // int num, lastDigit;
    // printf("Enter A Three Digit Number:");
    // scanf("%d", &num);
    // lastDigit = num % 10;
    // num = num / 10;
    // lastDigit = lastDigit * 100 + num;
    // printf("After Rotating 1 Digit towards Right: %d",lastDigit);
    
    
    
    getch();
    return 0;
}

// Main Function End
