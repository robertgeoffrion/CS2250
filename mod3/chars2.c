/*
 * =====================================================================================
 *
 *       Filename:  chars2.c
 *
 *    Description:  more chars
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:04:47 AM
 *       Revision:  none
 *       Compiler:  gcc chars2.c -o chars2.out
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
    char c = '0';
    char firstName;
    printf("C is %c\n", c);
    printf("C in hex is %x\n", c);
    printf("Enter the first letter of your first name:  \n");
    scanf("%c", &firstName);
    printf("Your first name starts with %c\n", firstName);
    return 0;
}
// Function Definitions


