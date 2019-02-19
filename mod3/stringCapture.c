/*
 * =====================================================================================
 *
 *       Filename:  stringCapture.c
 *
 *    Description:  capturing strings
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:48:56 AM
 *       Revision:  none
 *       Compiler:  gcc stringCapture.c -o stringCapture.out
 *
 *         Author:  Robert Geoffrion (), Robertgeoffrion@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes
const int SIZE = 50;
// Main Function
int main()
{
    // %s is the placeholder
    char fName[SIZE];
    // only 49 charecters because of the null charecter
    char lName[SIZE]; // only 49 charecters because of the null charecter
    printf("please enter your name: ");
    scanf("%s", fName);
    printf("your name is %s\n", fName);

    printf("please enter your last name: ");
    scanf("%s", lName);
    printf("your last name is %s\n", lName);

    return 0;
}
// Function Definitions


