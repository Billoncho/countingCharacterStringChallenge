/*
Author:     Billy Gene Ridgeway
Date:       October 12th. 2022
Purpose:    Counting characters in a string challenge. Pass a const pointer to a function and
            count the number of characters in the string passed without using strnlen.
*/

#include<stdio.h>
#include<string.h>

int stringLengthCalc(const char *ptrTS);    // Create function declaration.
                                            // Const as the first keyword means
                                            // that the item cannot be changed.
                                            // If we put const like this (char *const ptrTS)
                                            // then that would mean that the address of the
                                            // pointer could not be changed.

int stringLengthCalc(const char *ptrTS)
{
    const char *ptrEnd = ptrTS;             // Declare a new constant char pointer and set it to
                                            // the address of ptrTS to be used to determine the
                                            // length of the string with pointer arithmetic.
    while(*ptrEnd)                          // Loop until the NULL character is found.
    {
        ptrEnd++;                           // Increment the pointer until the NULL character is found.
    }
    return ptrEnd - ptrTS;                  // Subtract the length of ptrEnd from ptrTS and return the
                                            // the integer value.
}

int main(void)
{
    int len = 0;
    char testString[] = "Hello World!";
    const char *ptrTS1 = testString;

    len = stringLengthCalc(ptrTS1);
    printf("\nThe string contains %d characters.\n", len);

    printf("\nTest string = %d.\n", stringLengthCalc("There is only one God and Jesus is his name."));
    printf("Empty string = %d.\n", stringLengthCalc(""));
    printf("My first name = %d.\n", stringLengthCalc("Billy"));
    printf("My full name = %d.\n", stringLengthCalc("Billy Gene Ridgeway"));

    return 0;
}