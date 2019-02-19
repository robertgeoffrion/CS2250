/*
 * =====================================================================================
 *
 *       Filename:  stringsFunc.c
 *
 *    Description:  learn some string functions
 *
 *        Version:  1.0
 *        Created:  01/24/2019 09:09:23 AM
 *       Revision:  none
 *       Compiler:  gcc stringsFunc.c -o stringFunc.out -
 *
 *         Author:  Robert Geoffrion (), Robertgeoffrion@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
    char first[50];
    char last[50];
    char FullName[100];
    // get first name
    printf("please enter your first and last name: ");
    scanf("%s %s", first, last);
    // get last name
    // add them together to make full name
    strcpy(FullName, first);
    strcat(FullName, " ");
    strcat(FullName, last);


    // print it
    printf("Hello %s\n", FullName);

    return 0;
}
// Function Definitions


