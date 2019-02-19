/*
 * =====================================================================================
 *
 *       Filename:  scanChars.c
 *
 *    Description:  take multiple chars as Input
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:40:48 AM
 *       Revision:  none
 *       Compiler:  gcc scanChars.c -o scanChars.out
 *
 *         Author:  Robert Geoffrion (), Robertgeoffrion@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    char cIn;
    printf("enter a charecter\n");
    scanf(" %c", &cIn);
    printf("you entered [%c]\n", cIn);
    
    printf("enter a charecter\n");
    scanf(" %c", &cIn);
    printf("you entered [%c]\n", cIn);
    return 0;
}
// Function Definitions


