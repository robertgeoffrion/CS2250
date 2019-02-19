/*
 * =====================================================================================
 *
 *       Filename:  temp.c
 *
 *    Description:  program to calculate temp
 *
 *        Version:  1.0
 *        Created:  01/29/2019 08:41:31 AM
 *       Revision:  none
 *       Compiler:  gcc temp.c -o temp.out
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
    //ask user which temperature mode they want to use
    char mode;
    float temp = 12 ;
    double f_temp;
    double c_temp;
    printf("what temperature mode are you looking for (F or C)");
    scanf("%c", &mode);

    // based on choice, display celcius or fahrenhight 
    //
    if(mode == 'F' || mode == 'f')
    {
        f_temp = (temp * 9/5) + 32;
        printf("the temp is %fl degrees F\n", f_temp);
    }
    else if(mode == 'C' || mode == 'c')
    {
        c_temp = temp;
        printf("the temp is %lf degrees C\n", c_temp);
    }
    else
    {
        printf("you entered the wrong mode\n");
    }
    return 0;
}
// Function Definitions


