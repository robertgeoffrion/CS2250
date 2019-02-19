/*
 * =====================================================================================
 *
 *       Filename:  cartesian.c
 *
 *    Description:  calculate cartesian coordinates based on radius 
 *    and the theta angle in degrees
 *
 *        Version:  1.0
 *        Created:  01/24/2019 08:35:54 AM
 *       Revision:  none
 *       Compiler:  gcc cartesian.c -o cartesian.out -lm
 *
 *         Author:  Robert Geoffrion (), Robertgeoffrion@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
    double Radius;
    double thetaD;
    double thetaR;
    double X;
    double Y;

    // capture user input for radius and angle
    printf("Please enter the radius:");
    scanf("%lf", &Radius);
    printf("please enter the angle in degrees:");
    scanf("%lf", &thetaD);
    //convert the angle to radians
    thetaR = (3.14159*thetaD)/180;

    //calculate cartesian coordinates
    X = Radius*cos(thetaR);
    Y = Radius*sin(thetaR);

    // print result limit to two decimal points
    // %.2lf gives only 2 decimal points
    // %6.2lf makes the output of the variable 6 wide
    printf("your point lies at (%.2lf, %.2lf) in a 2D coordinate plane\n", X, Y);
    return 0;
}
// Function Definition

