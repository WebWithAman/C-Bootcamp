// // C++ Bootcamp Assignment-14 Solved All Questions Here :-
// I Solved All Questions in this Single file :-

// Header Files
#include <stdio.h>
#include <conio.h>

// Main Function Start
int main()
{


    // 1. WAP to Calculate Sum of Numbers Stored in An Array of Size 10. Take Array Values From User :-
    // int numbers[10], sum = 0;
    // printf("Enter 10 Numbers :-\n");
    // for (int i = 0; i < 10; i++)
    // {
    //     scanf("%d", &numbers[i]);
    //     sum += numbers[i];
    // }
    // printf("Sum of Numbers :- %d", sum);



    // 2. WAP to Calculate Average of Numbers Stored in An Array of Size 10. Take Array Values From User :-
    // int numbers[10], sum = 0;
    // printf("Enter 10 Numbers :-\n");
    // for (int i = 0; i < 10; i++)
    // {
    //     scanf("%d", &numbers[i]);
    //     sum += numbers[i];
    // }
    // printf("Average of Numbers :- %.2f", sum / 10.0);



    // 3. WAP to Calculate Sum of All Even Numbers And All Odd Numbers Stored in An Array of Size 10. Take Array Values From User :-
    // int numbers[10], sumOfEvens = 0, sumOfOdds = 0;
    // printf("Enter 10 Numbers :-\n");
    // for (int i = 0; i < 10; i++)
    // {
    //     scanf("%d", &numbers[i]);
    //     if (numbers[i] % 2)
    //         sumOfOdds += numbers[i];
    //     else
    //         sumOfEvens += numbers[i];
    // }
    // printf("Sum of Even Numbers :- %d\n", sumOfEvens);
    // printf("Sum of Odd Numbers :- %d\n", sumOfOdds);



    // 4. WAP to Find Greatest Number Stored in An Array of Size 10. Take Array Values From User :-
    // int numbers[10], greatest = 0;
    // printf("Enter 10 Numbers :-\n");
    // for (int i = 0; i < 10; i++)
    // {
    //     scanf("%d", &numbers[i]);
    //     if (numbers[i] > greatest)
    //         greatest = numbers[i];
    // }
    // printf("Greatest Number :- %d", greatest);



    // 5. WAP to Find Smallest Number Stored in An Array of Size 10. Take Array Values From User :-
    // int numbers[10], smallest = 0;
    // printf("Enter 10 Numbers :-\n");
    // for (int i = 0; i < 10; i++)
    //     scanf("%d", &numbers[i]);
    // smallest = numbers[0];
    // for (int i = 1; i < 10; i++)
    // {
    //     if (numbers[i] < smallest)
    //         smallest = numbers[i];
    // }
    // printf("Smallest Number :- %d", smallest);



    // 6. WAP to Sort Elements of An Array of Size 10. Take Array Values From User :-
    // int numbers[10], temp;
    // printf("Enter 10 Numbers :-\n");
    // for (int i = 0; i < 10; i++)
    //     scanf("%d", &numbers[i]);
    // printf("Before Sorting :- \n");
    // for (int i = 0; i < 10; i++)
    //     printf("%d ", numbers[i]);
    // for (int i = 0; i < 10 - 1; i++)
    //     for (int j = i + 1; j < 10; j++)
    //         if (numbers[i] > numbers[j])
    //         {
    //             temp = numbers[i];
    //             numbers[i] = numbers[j];
    //             numbers[j] = temp;
    //         }
    // printf("\nAfter Sorting :-\n");
    // for (int i = 0; i < 10; i++)
    //     printf("%d ", numbers[i]);



    // 7. WAP to Find Second Largest Number of An Array . Take Array Values From User :-
    // int n;
    // printf("How Many Numbers:- ");
    // scanf("%d", &n);
    // int numbers[10], largest, secondLargest;
    // printf("Enter %d Numbers :-\n",n);
    // for (int i = 0; i < n; i++)
    //     scanf("%d", &numbers[i]);
    // largest = secondLargest = numbers[0];
    // for (int i = 0; i < n; i++)
    // {
    //     if (numbers[i] > largest)
    //     {
    //         secondLargest = largest;
    //         largest = numbers[i];
    //     }
    //     else if (numbers[i] >= secondLargest)
    //         secondLargest = numbers[i];
    // }
    // printf("Second Largest Number :- %d", secondLargest);



    // 8. WAP to Find Second Smallest Number of An Array . Take Array Values From User :-
    // int n;
    // printf("How Many Numbers:- ");
    // scanf("%d", &n);
    // int numbers[10], smallest, secondSmallest;
    // printf("Enter %d Numbers :-\n", n);
    // for (int i = 0; i < n; i++)
    //     scanf("%d", &numbers[i]);
    // smallest = secondSmallest = numbers[0];
    // for (int i = 0; i < n; i++)
    // {
    //     if (numbers[i] < smallest)
    //     {
    //         secondSmallest = smallest;
    //         smallest = numbers[i];
    //     }
    //     else if (numbers[i] <= secondSmallest)
    //         secondSmallest = numbers[i];
    // }
    // printf("Second Largest Number :- %d", secondSmallest);




    // 9. WAP to Read n Numbers In An Array and Display It in Reverse Order. Take Array Values From User :-
    // int n;
    // printf("How Many Numbers:- ");
    // scanf("%d", &n);
    // int numbers[n];
    // printf("Enter %d Numbers :-\n", n);
    // for (int i = 0; i < n; i++)
    //     scanf("%d", &numbers[i]);
    // printf("Numbers In Normal Order:-\n");
    // for (int i = 0; i < n; i++)
    //     printf("%d ", numbers[i]);
    // printf("\nNumbers In Reverse Order:-\n");
    // for (int i = n - 1; i >= 0; i--)
    //     printf("%d ", numbers[i]);



    // 10. WAP to Copy Elements of One Array into Another Array. Take Array Values From User :-
    // int n;
    // printf("How Many Numbers:- ");
    // scanf("%d", &n);
    // int numbers[n], copyNumbers[n];
    // printf("Enter %d Numbers :-\n", n);
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &numbers[i]);
    //     copyNumbers[i] = numbers[i];
    // }
    // printf("Array Elements :-\n");
    // for (int i = n - 1; i >= 0; i--)
    //     printf("%d ", numbers[i]);
    // printf("\nCopy of Array Elements in Another Array :-\n");
    // for (int i = n - 1; i >= 0; i--)
    //     printf("%d ", copyNumbers[i]);



    getch();
    return 0;
}
// Main Function End