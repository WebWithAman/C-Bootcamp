// // C++ Bootcamp Assignment-9 Solved All Questions Here :-
// I Solved All Questions in this Single file :-

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

// Main Function Start
int main()
{



    // 1. WAP Which Takes Month Number As an Input and Display Number of Days in That Monyh :-
    // int month;
    // printf("Enter A Month Number:");
    // scanf("%d", &month);
    // switch (month)
    // {
    // case 1:
    // case 3:
    // case 5:
    // case 7:
    // case 8:
    // case 10:
    // case 12:
    //     printf("31 Days");
    //     break;
    // case 4:
    // case 6:
    // case 9:
    // case 11:
    //     printf("30 Days");
    //     break;
    // case 2:
    //     printf("28 Days");
    //     break;
    // default:
    //     printf("Month Does Not Exist");
    // }



    // 2. Write A Menu Driven Program With Following Options :-
    // a. Addition
    // a. Subtraction
    // a. Multiplication
    // a. Division
    // a. Exit

    // char choice;
    // float num1, num2;
    // while (1)
    // {
    //     printf("Enter a. Addition\n");
    //     printf("Enter b. Subtraction\n");
    //     printf("Enter c. Multiplication\n");
    //     printf("Enter d. Division\n");
    //     printf("Enter e. Exit\n");
    //     printf("Enter Your Choice:");
    //     scanf("%c", &choice);
    //     printf("\n");
    //     switch (choice)
    //     {
    //     case 'a':
    //         printf("Enter Two Numbers:");
    //         scanf("%f%f", &num1, &num2);
    //         printf("Answer : %.2f\n", num1 + num2);
    //         break;
    //     case 'b':
    //         printf("Enter Two Numbers:");
    //         scanf("%f%f", &num1, &num2);
    //         printf("Answer : %.2f\n", num1 - num2);
    //         break;
    //     case 'c':
    //         printf("Enter Two Numbers:");
    //         scanf("%f%f", &num1, &num2);
    //         printf("Answer : %.2f\n", num1 * num2);
    //         break;
    //     case 'd':
    //         printf("Enter Two Numbers (Dividend,Divisor) :");
    //         scanf("%f%f", &num1, &num2);
    //         printf("Answer : %.2f\n", num1 / num2);
    //         break;
    //     case 'e':
    //         exit(0);
    //     default:
    //         printf("Invalid Choice");
    //     }
    //     getch();
    //     fflush(stdin);
    //     printf("\n");
    //     printf("\n");
    // }



    // 3. WAP Which Takes Day Number of a Week And Displays Unique Greeting Message for the Day:-
    // int week;
    // printf("Enter Day Number of the Week:");
    // scanf("%d", &week);
    // switch (week)
    // {
    // case 1:
    //     printf("Monday!!  Working Days Start.. Work Mode On...");
    //     break;
    // case 2:
    //     printf("Tuesday!! Works Going On...");
    //     break;
    // case 3:
    //     printf("Wednesday!! Work Still Going On...");
    //     break;
    // case 4:
    //     printf("Thursday!! Felling Tired Due to Work...");
    //     break;
    // case 5:
    //     printf("Friday!!  Litte Hope For Sunady....");
    //     break;
    // case 6:
    //     printf("Saturday!! Excited For Sunday...");
    //     break;
    // case 7:
    //     printf("Sunday!! Fun Day.. Chill Mode On...");
    //     break;
    // default:
    //     printf("Day Not Exist");
    // }



    // 4. Write A Menu Driven Program With Following Options :-
    // a. Check Whether A Given Set of Three Numbers Are Lenght of An Issosceles Triangle or Not.
    // b. Check Whether A Given Set of Three Numbers Are Lenght of An Right Angled Triangle or Not.
    // c. Check Whether A Given Set of Three Numbers Are Lenght of An Equilateral Triangle or Not.
    // d. Exit

    // char choice;
    // float side1, side2, side3;
    // while (1)
    // {
    //     printf("Enter a. To Check Whether A Given Set of Three Numbers Are Lenght of An Issosceles Triangle or Not.\n");
    //     printf("Enter b. Check Whether A Given Set of Three Numbers Are Lenght of An Right Angled Triangle or Not.\n");
    //     printf("Enter c. Check Whether A Given Set of Three Numbers Are Lenght of An Equilateral Triangle or Not.\n");
    //     printf("Enter d. Exit\n");
    //     printf("Enter Your Choice:");
    //     scanf("%c", &choice);
    //     printf("\n");
    //     switch (choice)
    //     {
    //     case 'a':
    //         printf("Enter Lenghts Three Sides of Triangle:");
    //         scanf("%f%f%f", &side1, &side2, &side3);
    //         if ((side1 > 0 && side2 > 0 && side3 > 0) && (side1 == side2 || side1 == side3 || side2 == side3))
    //             printf("Yes, Given Lenghts Are of An Issosceles Triangle");
    //         else
    //             printf("No, Given Lenghts Are Not of An Issosceles Triangle");
    //         break;
    //     case 'b':
    //         printf("Enter Lengths of Three  Sides of Triangle:");
    //         scanf("%f%f%f", &side1, &side2, &side3);
    //         side1 = side1 * side1;
    //         side2 = side2 * side2;
    //         side3 = side3 * side3;
    //         if ((side1 > 0 && side2 > 0 && side3 > 0) && ((side1 + side2 == side3) || (side1 + side3 == side2) || (side2 + side3 == side1)))
    //             printf("Yes, Given Lenghts Are of a Right Angled Triangle");
    //         else
    //             printf("No, Given Lenghts Are Not of a Right Angled Triangle");
    //         break;
    //     case 'c':
    //         printf("Enter Lenghts of  Three Sides of Triangle:");
    //         scanf("%f%f%f", &side1, &side2, &side3);
    //         if (side1 > 0 && side1 == side2 && side1 == side3)
    //             printf("Yes, Given Lenghts Are of An Equilateral Triangle");
    //         else
    //             printf("No, Given Lenghts Are Not of An Equilateral Triangle");
    //         break;
    //     case 'd':
    //         exit(0);
    //     default:
    //         printf("Invalid Choice");
    //     }
    //     getch();
    //     fflush(stdin);
    //     printf("\n");
    //     printf("\n");
    // }



    // 5. Convert Following if-else-if Construct into Switch Case :-
    // if (var == 1)
    //     System.out.println("good");
    // else if (var == 2)
    //     System.out.println("better");
    // else if (var == 3)
    //     System.out.println("best");
    // else
    //     System.out.println("invalid");



    // int var;
    // printf("Enter A Number:");
    // scanf("%d", &var);
    // switch (var)
    // {
    // case 1:
    //     printf("good");
    //     break;
    // case 2:
    //     printf("better");
    //     break;
    // case 3:
    //     printf("best");
    //     break;
    // default:
    //     printf("invalid");
    // }



    // 6. WAP to Check a Given Year is Leap Year or Not :-
    // unsigned short int year;
    // printf("Enter A Year:");
    // scanf("%hu", &year);
    // switch ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
    // {
    // case 0:
    //     printf("%hu is not a Leap Year", year);
    //     break;
    // case 1:
    //     printf("%hu is a Leap Year", year);
    // }



    // 7. Program to Take User Input As Electricity Unit Charges and Calculate Total Electricity Bill According to The Given Condition. Using Switch Case :-
    // For the First 50 Units Rs. 0.50/unit
    // For the First 100 Units Rs. 0.75/unit
    // For the First 100 Units Rs. 1.20/unit
    // For the First 250 Units Rs. 1.50/unit
    // An Additional Surcharge of 20% is Added to the Bill...

    // float units, totalBill, matchedUnits;
    // int i = 1, requiredUnits = 50, temp = 50;
    // printf("Enter Electricity Units:");
    // scanf("%f", &units);
    // while (units)
    // {
    //     matchedUnits = units >= requiredUnits ? temp : units;
    //     switch (i)
    //     {
    //     case 1:
    //         totalBill += matchedUnits * .50;
    //         units -= matchedUnits;
    //         temp += 50;
    //         break;
    //     case 2:
    //         totalBill += matchedUnits * .75;
    //         units -= matchedUnits;
    //         break;
    //     case 3:
    //         totalBill += matchedUnits * 1.20;
    //         units -= matchedUnits;
    //         requiredUnits = 1;
    //         temp = units;
    //         break;
    //     case 4:
    //         totalBill += matchedUnits * 1.50;
    //         units -= matchedUnits;
    //     }
    //     i++;
    // }
    // totalBill += 20.0 / 100 * totalBill;
    // printf("Total Bill Payment : %.2f", totalBill);



    // 8. Program to Convert A Positive Number into Negative and Negative Number into Positive Using A Switch Statement :-
    // int num;
    // printf("Enter A Number:");
    // scanf("%d", &num);
    // switch (1)
    // {
    // case 1:
    //     num = -num;
    // }
    // printf("If You Entered Positive Then Number Have Been Became Negative And If You Entered Negative Then Number Have Been Became Positive\nNow, Resultant Number is: %d", num);



    // 9. WAP to Convert Even Number into its Upper Nearest Odd Number Using Switch Case :-
    // int num;
    // printf("Enter A Even  Number:");
    // scanf("%d", &num);
    // switch (num % 2)
    // {
    // case 0:
    //     num = num + 1;
    //     printf("Upper Nearest Odd Number Than You Enter : %d", num);
    //     break;
    // case 1:
    //     printf("Number is : %d", num);
    // }



    // 10. WAP to Find All Roots of A Quadratic Equation Using Switch Case :-
    // float a, b, c, root1, root2, discriminant, realPart, imaginaryPart;
    // printf("Enter Coefficients a,b and c :");
    // scanf("%f%f%f", &a, &b, &c);
    // discriminant = b * b - 4 * a * c;
    // switch ((int)discriminant)
    // {
    // case 0:
    //     root1 = root2 = -b / (2 * a);
    //     printf("Roots Are Real and Equal\n");
    //     printf("Roots Are %.2f and %.2f", root1, root2);
    //     break;
    // default:
    //     switch (discriminant < 0)
    //     {
    //     case 0:
    //         root1 = (-b + sqrt(discriminant)) / (2 * a);
    //         root2 = (-b - sqrt(discriminant)) / (2 * a);
    //         printf("Roots Are Real and Unequal\n");
    //         printf("Roots Are %.2f and %.2f", root1, root2);
    //         break;
    //     case 1:
    //         realPart = (float)-b / (2 * a);
    //         imaginaryPart = sqrt(-discriminant) / (2 * a);
    //         printf("Roots Are Imaginary\n");
    //         printf("Root Are %.2f + %.2fi and %.2f - %.2fi", realPart, imaginaryPart, realPart, imaginaryPart);
    //     }
    // }

    getch();
    return 0;
}
// Main Function End
