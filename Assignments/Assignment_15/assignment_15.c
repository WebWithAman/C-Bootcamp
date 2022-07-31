// C++ Bootcamp Assignment-15 Solved All Questions Here :-
// I Solved All Questions in this Single file :-


// Header Files
#include <stdio.h>
#include <conio.h>


/********************* All Functions Declarations (Prototypes) *********************/


// Function to Find Greatest Number From Array
int greatestNumber(int[], int);


// Function to Find Smallest Number From Array
int smallestNumber(int[], int);


// Function to Sort Array In Assending Order
void sortInAssending(int[], int);


// Function to Sort Array In Assending Order
void sortInDescending(int[], int);

// Function to Rotate An Array Elements by 1 Position in Right Direction
void rotateArrayBy1InRight(int[], int);


// Function to Rotate An Array Elements by 1 Position in Left Direction
void rotateArrayBy1InLeft(int[], int);


// Function to Rotate An Array Elements by n Position in d Direction
void rotateArrayByNInDDirection(int[], int n, int, int);


// Function to Find First Occurrence of Adjacent Duplicate Values in An Array
int firstAdjacentDuplicate(int[], int);


// Function to Display Array In Reverse Order
void displayInReverseOrder(int[], int);


// Function to Count Total Number of Duplicate Elements in Array
int totalDuplicateElements(int[], int);


// Function to Print ALL Unique Elements of An Array
void printUniqueElements(int[], int);


// Function to Check An Element is Twice or Not in An Array
int elementUniqueOrNot(int[], int, int);


// Function to Merge Two Arrays of Same Size
void mergeTwoArraysOfSameSize(int[], int[], int[], int);


// Function to Count the Frequency of Each Element of An Array
void countFrequencyOfEachElement(int[], int);



// Main Function Start
int main()
{


    // 1. Write A Function to Find Greatest Number From Given Array of Any Size (TSRS) :-
    // int n;
    // printf("How Many Numbers:- ");
    // scanf("%d", &n);
    // printf("Enter %d Numbers:-\n",n);
    // int numbers[n];
    // for (int i = 0; i < n; i++)
    //     scanf("%d", &numbers[i]);
    // printf("Greatest Number :- %d", greatestNumber(numbers, n));



    // 2. Write A Function to Find Smallest Number From Given Array of Any Size (TSRS) :-
    // int n;
    // printf("How Many Numbers:- ");
    // scanf("%d", &n);
    // printf("Enter %d Numbers:-\n",n);
    // int numbers[n];
    // for (int i = 0; i < n; i++)
    //     scanf("%d", &numbers[i]);
    // printf("Smallest Number :- %d", smallestNumber(numbers, n));



    // 3. Write A Function to Sort An Array of Any Size (TSRN) :-
    // int n;
    // printf("How Many Numbers:- ");
    // scanf("%d", &n);
    // printf("Enter %d Numbers:-\n", n);
    // int numbers[n];
    // for (int i = 0; i < n; i++)
    //     scanf("%d", &numbers[i]);
    // printf("Sorted Elements in Assending Order:-\n");
    // sortInAssending(numbers, n);
    // for (int i = 0; i < n; i++)
    //     printf("%d ", numbers[i]);



    // 4. Write A Function to Rotate An Array by n Position in d Direction :-
    // int n, direction, rotateByN;
    // printf("How Many Numbers:- ");
    // scanf("%d", &n);
    // printf("Enter %d Numbers:-\n", n);
    // int numbers[n];
    // for (int i = 0; i < n; i++)
    //     scanf("%d", &numbers[i]);
    // printf("Enter Position by which Array Rotate :- ");
    // scanf("%d", &rotateByN);
    // printf("Enter Direction Left/Right :-\nFor Left, Enter 0 \nFor Right, Enter 1\n");
    // scanf("%d", &direction);
    // printf("Array After Rotation :-\n");
    // rotateArrayByNInDDirection(numbers, n, rotateByN, direction);
    // for (int i = 0; i < n; i++)
    //     printf("%d ", numbers[i]);



    // 5. Write A Function to Find First Occurrence of Adjacent Duplicate Values in An Array, Return Value of Element :-
    // int n;
    // printf("How Many Numbers:- ");
    // scanf("%d", &n);
    // printf("Enter %d Numbers:-\n", n);
    // int numbers[n];
    // for (int i = 0; i < n; i++)
    //     scanf("%d", &numbers[i]);
    // printf("First Adjacent Duplicate Element :- %d", firstAdjacentDuplicate(numbers, n));



    // 6. Write A Function to Read n Numbers In An Array and Display It in Reverse Order :-
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
    // displayInReverseOrder(numbers, n);



    // 7. Write A Function to Count Total Number of Duplicate Elements in An Array :-
    // int n;
    // printf("How Many Numbers:- ");
    // scanf("%d", &n);
    // int numbers[n];
    // printf("Enter %d Numbers :-\n", n);
    // for (int i = 0; i < n; i++)
    //     scanf("%d", &numbers[i]);
    // printf("Total Duplicate Elements :- %d", totalDuplicateElements(numbers, n));



    // 8. Write A Function to Print All Unique Elements of An Array :-
    // int n;
    // printf("How Many Numbers:- ");
    // scanf("%d", &n);
    // int numbers[n];
    // printf("Enter %d Numbers :-\n", n);
    // for (int i = 0; i < n; i++)
    //     scanf("%d", &numbers[i]);
    // printf("Unique Elements of Array :-\n");
    // printUniqueElements(numbers, n);



    // 9. Write A Function to Merge Two Arrays of Same Size Sorted in Descending Order :-
    // int n = 10, mergedArray[2 * n];
    // int array1[10] = {2, 55, 10, 11, 45, 67, 23, 23, 90, 1};
    // int array2[10] = {6, 56, 16, 162, 65, 66, 26, 268, 96, 61};
    // printf("\nArray1 Elements :-\n");
    // for (int i = 0; i < n; i++)
    //     printf("%d ", array1[i]);
    // printf("\n\nArray2 Elements :-\n");
    // for (int i = 0; i < n; i++)
    //     printf("%d ", array2[i]);
    // printf("\n\nArray1 and Array2 Merged in Another Array in Descending Order :-\n");
    // mergeTwoArraysOfSameSize(mergedArray, array1, array2, n);
    // printf("Merged Array Elements :-\n");
    // for (int i = 0; i < 2 * n; i++)
    //     printf("%d ", mergedArray[i]);



    // 10. Write A Function to Count the Frequency of Each Element In An Array :-
    // int numbers[10] = {10, 10,20, 5, 5, 5, 15, 20, 20, 30};
    // printf("Frequencies of Each Element of Array :-\n\n");
    // countFrequencyOfEachElement(numbers, 10);



    getch();
    return 0;
}
// Main Function End



/********************* All Functions Definitions *********************/

// Function to Find Greatest Number From Array
int greatestNumber(int numbers[], int n)
{
    int greatest = numbers[0];
    for (int i = 1; i < n; i++)
        if (numbers[i] > greatest)
            greatest = numbers[i];
    return greatest;
}


// Function to Find Smallest Number From Array
int smallestNumber(int numbers[], int n)
{
    int smallest = numbers[0];
    for (int i = 1; i < n; i++)
        if (numbers[i] < smallest)
            smallest = numbers[i];
    return smallest;
}


// Function to Sort Array In Assending Order
void sortInAssending(int numbers[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (numbers[i] > numbers[j])
            {
                numbers[i] = numbers[i] + numbers[j];
                numbers[j] = numbers[i] - numbers[j];
                numbers[i] = numbers[i] - numbers[j];
            }
}



// Function to Sort Array In Assending Order
void sortInDescending(int numbers[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (numbers[i] < numbers[j])
            {
                numbers[i] = numbers[i] + numbers[j];
                numbers[j] = numbers[i] - numbers[j];
                numbers[i] = numbers[i] - numbers[j];
            }
}



// Function to Rotate An Array Elements by 1 Position in Right Direction
void rotateArrayBy1InRight(int numbers[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        temp = numbers[0];
        numbers[0] = numbers[i];
        numbers[i] = temp;
    }
}



// Function to Rotate An Array Elements by 1 Position in Left Direction
void rotateArrayBy1InLeft(int numbers[], int n)
{
    int temp;
    for (int i = n - 2; i >= 0; i--)
    {
        temp = numbers[n - 1];
        numbers[n - 1] = numbers[i];
        numbers[i] = temp;
    }
}



// Function to Rotate An Array Elements by n Position in d Direction
void rotateArrayByNInDDirection(int numbers[], int n, int rotateByN, int direction)
{
    if (direction)
        while (rotateByN--)
            rotateArrayBy1InRight(numbers, n);
    else
        while (rotateByN--)
            rotateArrayBy1InLeft(numbers, n);
}



// Function to Find First Occurrence of Adjacent Duplicate Values in An Array
int firstAdjacentDuplicate(int numbers[], int n)
{
    for (int i = 0; i < n - 1; i++)
        if (numbers[i] == numbers[i + 1])
            return numbers[i];
}



// Function to Display Array In Reverse Order
void displayInReverseOrder(int numbers[], int n)
{
    for (int i = n - 1; i >= 0; i--)
        printf("%d ", numbers[i]);
}



// Function to Count Total Number of Duplicate Elements in Array
int totalDuplicateElements(int numbers[], int n)
{
    int duplicate = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (numbers[i] == numbers[j])
            {
                duplicate++;
                break;
            }
    return duplicate;
}



// Function to Print ALL Unique Elements of An Array
void printUniqueElements(int numbers[], int n)
{
    sortInAssending(numbers, n);
    for (int i = 0; i < n; i++)
        if (numbers[i] != numbers[i + 1] && numbers[i] != numbers[i - 1])
            printf("%d ", numbers[i]);
}



// Function to Merge Two Arrays of Same Size
void mergeTwoArraysOfSameSize(int mergedArray[], int array1[], int array2[], int size)
{

    for (int i = 0; i < size; i++)
    {
        mergedArray[2 * i] = array1[i];
        mergedArray[2 * i + 1] = array2[i];
    }
    sortInDescending(mergedArray, 2 * size);
}



// Function to Count the Frequency of Each Element of An Array
void countFrequencyOfEachElement(int numbers[], int n)
{
    int frequency, i;
    sortInAssending(numbers, n);
    printf("| ELEMENT |            | FREQUENCY |\n");

    for (i = 0; i < n; i = i + frequency)
    {
        for (frequency = 0; numbers[i] == numbers[frequency + i]; frequency++)
            ;

        printf("| %4d    | ---------- |  %4d     |\n", numbers[i], frequency);
    }
}