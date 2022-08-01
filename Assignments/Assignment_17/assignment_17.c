// C++ Bootcamp Assignment-14 Solved All Questions Here :-
// I Solved All Questions in this Single file :-



// Header Files
#include <stdio.h>
#include <conio.h>



// Main Function Start
int main()
{


    // 1. WAP to Calculate Length of A String (Without Built-In Function) :-
    // char str[20] = "C++ Bootcamp";
    // int length;
    // for (length = 0; str[length]; length++)
    //     ;
    // printf("Length of the String is %d", length);



    // 2. WAP to Count the Occurrence of A Given Character in Given String :-
    // char name[40], ch;
    // int count = 0;
    // printf("Enter Your Name : ");
    // fgets(name, 40, stdin);
    // printf("Enter A Character to Count its Occurrence in Your Name :");
    // ch = getchar();
    // for (int i = 0; name[i]; i++)
    // {
    //     if (name[i] == ch)
    //         count++;
    // }
    // printf("There is %d '%c' in Your Name", count, ch);



    // 3. WAP to Count the Occurrence of A Given Character in Given String :-
    // char str[40], vowels[6] = "aeiou";
    // int vowel = 0;
    // printf("Enter A Small (Dummy) Paragraph :-\n");
    // fgets(str, 40, stdin);
    // for (int i = 0; str[i]; i++)
    //     for (int j = 0; vowels[j]; j++)
    //         if (str[i] == vowels[j] || str[i] == vowels[j] - 32)
    //         {
    //             vowel++;
    //             break;
    //         }
    // printf("Total Number of Vowels in Entered Paragraph :- %d\n", vowel);



    // 4. WAP to Convert A Given String into Uppercase :-
    // char name[40];
    // printf("Enter Your Name : ");
    // fgets(name, 40, stdin);
    // for (int i = 0; name[i]; i++)
    // {
    //     if (name[i] >= 'a' && name[i] <= 'z')
    //         name[i] = name[i] - 32;
    // }
    // printf("Name Converted in Uppercase :- %s", name);



    // 5. WAP to Convert A Given String into Lowercase :-
    // char name[40];
    // printf("Enter Your Name : ");
    // fgets(name, 40, stdin);
    // for (int i = 0; name[i]; i++)
    // {
    //     if (name[i] >= 'A' && name[i] <= 'Z')
    //         name[i] = name[i] + 32;
    // }
    // printf("Name Converted in Lowercase :- %s", name);



    // 6. WAP to Reverse A String :-
    // char name[40], ch;
    // int start = 0, end;
    // printf("Enter Your Name : ");
    // fgets(name, 40, stdin);
    // for (end = 0; name[end]; end++)
    //     ;
    // for (; start < end; start++, end--)
    // {
    //     ch = name[start];
    //     name[start] = name[end-1];
    //     name[end-1] = ch;
    // }
    // printf("Entered Name in Reverse Order :- %s", name);



    // 7. WAP to Count the Total Number of Alphabets,Digits and Special Characters in A String :-
    // char str[40];
    // int alphabets = 0, digits = 0, specialChars =0;
    // printf("Enter A Small (Dummy) Paragraph :-\n");
    // fgets(str, 40, stdin);
    // for (int i = 0; str[i]; i++)
    // {
    //     if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
    //         alphabets++;
    //     else if (str[i] >= '0' && str[i] <= '9')
    //         digits++;
    //     else if
    //         specialChars++;
    // }
    // printf("\nAlphabets => %d\nDigits => %d\nSpecial Characters => %d\n", alphabets, digits, specialChars);



    // 8. WAP to  Copy One String into Another String :-
    // char str1[20] = "C++ Bootcamp", copyStr[20];
    // int i;
    // for (i = 0; str1[i]; i++)
    //     copyStr[i] = str1[i];
    // copyStr[i] = '\0';
    // printf("String Copied :- %s", copyStr);



    // 9. WAP to Sort  A String Array in Ascending Order :-
    // char ch, str[20] = "chaiolbbsjzcii";
    // int length = 0;
    // for (; str[length]; length++)
    //     ;
    // for (int i = 0; i < length - 1; i++)
    //     for (int j = 0; j < length - 1 - i; j++)
    //         if (str[j] > str[j + 1])
    //         {
    //             ch = str[j];
    //             str[j] = str[j + 1];
    //             str[j + 1] = ch;
    //         }
    // printf("String Sorted :- %s", str);



    // 20. WAP to Find Frequency of Characters In A String :-
    // char ch, str[20] = "chaialbbsjccii";
    // int length = 0, frequency = 0;
    // for (; str[length]; length++)
    //     ;
    // for (int i = 0; i < length - 1; i++)
    //     for (int j = 0; j < length - 1 - i; j++)
    //         if (str[j] > str[j + 1])
    //         {
    //             ch = str[j];
    //             str[j] = str[j + 1];
    //             str[j + 1] = ch;
    //         }
    // printf("\n\n| CHARACTER | | FREQUENCY | \n");
    // for (int i = 0; str[i]; i = i + frequency)
    // {
    //     for (frequency = 0; str[i] == str[i + frequency]; frequency++)
    //         ;
    //     if (str[i] != 32)
    //         printf("|     %c     | |    %2d     | \n", str[i], frequency);
    //     else
    //         printf("|   space   | |    %2d     | \n", frequency);
    // }



    getch();
    return 0;
}
// Main Function end