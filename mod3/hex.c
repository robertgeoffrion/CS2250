/*
 * =====================================================================================
 *
 *       Filename:  hex.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/24/2019 10:00:43 AM
 *       Revision:  none
 *       Compiler:  gcc hex.c -o hex.out
 *
 *         Author:  Robert Geoffrion (), Robertgeoffrion@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
const unsigned char pin1 = 0x01;
const unsigned char pin2 = 0x02;
const unsigned char pin3 = 0x04;
const unsigned char pin4 = 0x08;
// Function Prototypes

// Main Function
int main()
{
    unsigned char hex;

    printf("enter one hex number: ");
    scanf("%hhx", &hex);
    printf("%X in hex and %d in decimal", hex, hex);
    if(hex & pin1)
    {
        Printf("Pin 4 is high");
    }
    else
    {
    }
    // ask for one hex number, 1 byte
    // tell which bits are high

    return 0;
}
// Function Definitions


