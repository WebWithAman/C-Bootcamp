// C++ Bootcamp Assignment-18 Solved All Questions Here :-
// I Solved All Questions in this Single file :-


// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>


/*********** All Functions Declarations (Prototypes) ***********/

// Function to Calculate Length of A String
int lengthOfString(char[]);


// Function to Reverse  A String
void reverseString(char[]);


// Function to Compare Two strings
int compareStrings(char[], char[]);


// Function to Transform String into Uppercase
void convertToUppercase(char[]);


// Function to Transform String into Lowercase
void convertToLowercase(char[]);


// Function to Check A String is Aplhanumeric or Not
int IsAlphanumeric(char[]);


// Function to Check A String is Palindrome or Not
int IsPalindrome(char[]);


// Function to Copy String
void copyString(char[], char[]);


// Fucntion to Count Words in A String
int countWords(char[]);


// Function to Sort  A String  in Ascending Order :-
void sortStringInAscending(char[]);


// Function to Find Repeated Characters in A String
void findRepeatedCharacters(char[]);


// Function to Reverse String Word Wise
void reverseWordWise(char[]);


// Main Function Start
int main()
{


    // 1. Write A Function to Calculate Length of the String :-
    // char name[40];
    // printf("Enter Your Name :");
    // fgets(name, sizeof(name), stdin);
    // name[strcspn(name, "\n")] = '\0';
    // printf("Length of Your Name => %d Characters", lengthOfString(name));



    // 2. Write A Fuction to Reverse A String :-
    // char name[40];
    // printf("Enter Your Name :");
    // fgets(name, sizeof(name), stdin);
    // name[strcspn(name, "\n")] = '\0';
    // printf("\nYour Name In Normal Order =>%s2\n", name);
    // reverseString(name);
    // printf("Your Name In Reverse Order =>%s2\n", name);



    // 3. Write A function to Compare Two Strings :-
    // char str1[20], str2[20];
    // printf("Enter String 1 :");
    // fgets(str1, sizeof(str1), stdin);
    // printf("Enter String 2 :");
    // fgets(str2, sizeof(str2), stdin);
    // if (compareStrings(str1, str2))
    //     printf("Strings Are Not Same");
    // else
    //     printf("Strings Are Same");




    // 4. Write A Function to Transform String into Uppercase :-
    // char name[40];
    // printf("Enter Your Name :");
    // fgets(name, sizeof(name), stdin);
    // convertToUppercase(name);
    // printf("Name After Converting into Uppercase => %s", name);



    // 5. Write A Function to Transform String into Lowercase :-
    // char name[40];
    // printf("Enter Your Name :");
    // fgets(name, sizeof(name), stdin);
    // convertToLowercase(name);
    // printf("Name After Converting into Lowercase => %s", name);



    // 6. Write A Function to Check Whether A Given String is An Aplhanumeric String or Not :-
    // char str[40];
    // printf("Enter A String :");
    // fgets(str, sizeof(str), stdin);
    // if (IsAlphanumeric(str))
    //     printf("Entered String is An Aplhanumeric String");
    // else
    //     printf("Entered String is Not An Aplhanumeric String");



    // 7. Write A Function to Check Whether the Given String is Palindrome or Not :-
    // char str[40];
    // printf("Enter A String :");
    // fgets(str, sizeof(str), stdin);
    // str[strcspn(str, "\n")] = '\0';
    // IsPalindrome(str);
    // if (IsPalindrome(str))
    //     printf("Entered String is Palindrome");
    // else
    //     printf("Entered String is Not Palindrome");



    // 8. Write A Function to Count Words in A String :-
    // char str[40];
    // printf("Enter A String :");
    // fgets(str, sizeof(str), stdin);
    // str[strcspn(str, "\n")] = '\0';
    // printf("Total %d Word in String", countWords(str));



    // 9. Write A Function to Reverse A String Word Wise :-
    // char str[40]= "MySirG Education Services";
    // reverseWordWise(str);
    // printf("String Reversed Word Wise => %s", str);


    // 10. Write A Function to Find Repeated Characters in A String:-
    // char str[40];
    // printf("Enter A String :");
    // fgets(str, sizeof(str), stdin);
    // str[strcspn(str, "\n")] = '\0';
    // findRepeatedCharacters(str);



    getch();
    return 0;
}
// Main Function End

/*********** All Functions Definitions ***********/


// Function to Calculate Length of A String
int lengthOfString(char str[])
{
    int length = 0;
    for (; str[length]; length++)
        ;
    return length;
}



// Function to Reverse  A String
void reverseString(char str[])
{
    int start = 0, end = 0;
    char ch;
    for (; str[end]; end++)
        ;
    for (; start < end; start++, end--)
    {
        ch = str[start];
        str[start] = str[end - 1];
        str[end - 1] = ch;
    }
}



// Function to Compare Two strings
int compareStrings(char str1[], char str2[])
{
    for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            return str1[i] - str2[i];
            break;
        }
    }
    return 0;
}



// Function to Transform String into Uppercase
void convertToUppercase(char str[])
{
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
}



// Function to Transform String into Lowercase
void convertToLowercase(char str[])
{
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
}



// Function to Check A String is Aplhanumeric or Not
int IsAlphanumeric(char str[])
{
    int count = 0, aplhabet = 1, digit = -1;
    for (int i = 0; str[i]; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') && aplhabet)
            aplhabet = 0;
        else if (str[i] >= '0' && str[i] <= '9' && digit)
            digit = 0;

        if (aplhabet == digit)
            return 1;
    }
    return 0;
}


// Function to Copy String
void copyString(char target[], char source[])
{
    int i;
    for (i = 0; source[i]; i++)
        target[i] = source[i];
    target[i] = '\0';
}



// Function to Check A String is Palindrome or Not
int IsPalindrome(char str[])
{
    int length = lengthOfString(str);
    char copyStr[length + 1];
    copyString(copyStr, str);
    reverseString(copyStr);
    if (compareStrings(copyStr, str))
        return 0;
    else
        return 1;
}



// Fucntion to Count Words in A String
int countWords(char str[])
{
    int word = 1, flag = 0, lock = 0;
    for (int i = 0; str[i]; i++)
    {
        if (str[i] != 32)
            lock = 1;
        if (str[i] == ' ' && lock)
        {
            word++;
            lock = 0;
        }
    }
    flag ? word : word--;
    return word;
}



// Function to Sort  A String  in Ascending Order :-
void sortStringInAscending(char str[])
{
    int length = 0;
    char ch;
    for (; str[length]; length++)
        ;
    for (int i = 0; i < length - 1; i++)
        for (int j = i + 1; j < length; j++)
            if (str[i] > str[j])
            {
                ch = str[i];
                str[i] = str[j];
                str[j] = ch;
            }
}




// Function to Reverse String Word Wise
void reverseWordWise(char str[])
{

    int length = lengthOfString(str), k, space, index = 0;
    char copyStr[length + 1];
    copyString(copyStr, str);
    for (int i = length - 1; i >= 0; i = k)
    {
        space = 0;
        int j = i;
        while (copyStr[j] != ' ' && j >= 0)
            j--;

        k = j;
        while (copyStr[k] == ' ')
        {
            k--;
            space++;
        }
        j++;
        while (j <= i)
        {
            str[index] = copyStr[j];
            j++;
            index++;
        }
        while (space--)
        {
            str[index] = ' ';
            index++;
        }
    }
}



// Function to Find Repeated Characters in A String
void findRepeatedCharacters(char str[])
{
    int j = 1;
    sortStringInAscending(str);
    printf("Sorted String => ");
    puts(str);
    printf("Repeated Characters in String =>  ");
    for (int i = 0; str[i]; i = j)
    {
        j = i + 1;
        if (str[i] != 32)
            if (str[i] == str[j])
            {
                printf("%c,", str[i]);
                for (j++; str[i] == str[j]; j++)
                    ;
            }
    }
}
