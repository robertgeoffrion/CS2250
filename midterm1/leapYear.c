/*
 * =====================================================================================
 *
 *       Filename:  leapYear.c
 *
 *    Description:  detarmines whether a year is a leap year
 *
 *        Version:  1.0
 *        Created:  02/21/2019 08:54:53 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  robert geoffrion (), robertgeoffrion78@gmail.com
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes
int IsLeap(int year){
    int leap;
    if (year % 4 == 0){
        if (year % 100 == 0){
            if (year % 400 == 0){
               leap = 1;
            }
            else{
                leap = 0;
            }
        }
        else{
            leap = 1;
        }
    }
    else{
        leap = 0;
    }
    return leap;
}
//eMain Function
int main()
{
    
    printf("Finding the leap years between 2000 and 2019\n");


    //IsLeap(year);
    for (int i = 2000; i <= 2019; ++i){
    if (IsLeap(i) == 1){
        printf("The year %d is a leap year!\n", i);
    }
    else{
    }
    }
    return 0;
}
// Function Definitions


