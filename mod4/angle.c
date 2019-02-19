/*
 * =====================================================================================
 *
 *       Filename:  angle.c
 *
 *    Description:  calculate the quadrant based on input angle
 *                  quadrant 1: 0 - 90
 *                  quadrant 2: 90 - 180
 *                  quadrant 3: 180 - 270
 *                  quadrant 4: 270 - 360
 *
 *        Version:  1.0
 *        Created:  01/31/2019 08:34:58 AM
 *       Revision:  none
 *       Compiler:  gcc angle.c -o angle.out -lm
 *
 *         Author:  Robert Geoffrion (), Robertgeoffrion@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
    int fullangle;
    int angle;
    printf("please enter an angle in degrees: ");
    scanf("%d", &fullangle);
    if (fullangle >360)
    {
        angle = fullangle % 360;
    }
    else if (fullangle < 0)
    {
        angle = abs(360 + fullangle) % 360;
    }
    else
    {
        angle = fullangle;
    }
    
    if (angle > 0 && angle < 90)
    {
       printf("your angle is in the first quadrant\n");
    }
    else if (angle > 90 && angle < 180)
    {
        
       printf("your angle is in the second quadrant\n");
    }

    else if (angle > 180 && angle < 270)
    {
       printf("your angle is in the third quadrant\n");
    }
    else if (angle > 270 && angle < 360)
    {
       printf("your angle is in the fourth quadrant\n");
    }
    else
    {
        printf("your angle is on an axis\n");
    }
    return 0;
}
// Function Definitions


