/*
 * =====================================================================================
 *
 *       Filename:  even.c
 *
 *    Description:  determine if a number is even or odd
 *
 *
 *        Version:  1.0
 *        Created:  01/24/2019 09:36:45 AM
 *       Revision:  none
 *       Compiler:  gcc even.c -o even.out 
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
    int num1;
    int num2;
    printf("enter an even and an odd integer: ");
    scanf("%d %d", &num1, &num2);
    if(num1 % 2 == 0)
    {
        if(num2 % 2 != 0)
        {
            printf("you entered %d and %d correctly\n", num1, num2);
        }
        else
        {
            printf("your second number was even\n");
        }
    }   
    else
    {
        printf("your first number is odd\n");
    }
    printf("goodbye\n");

    return 0;
}
// Function Definitions


