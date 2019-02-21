/*
 * =====================================================================================
 *
 *       Filename:  grades.c
 *
 *    Description:  takes grades and calculates the average as well as how many failing grades
 *
 *        Version:  1.0
 *        Created:  02/21/2019 08:28:10 AM
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
int Failures(){
int numGrades, failures=0;
double total=0, average;

printf("How many grades do you want to input? ");
scanf("%d", &numGrades);
double grade = 0;
    for (int i = 1; i <= numGrades; ++i){
        printf("Enter grade #%d: ", i);
        scanf("%lf", &grade);
        total = total + grade;
        if(grade < 65){ // assuming that a 65 is not a failing grade
            failures = failures +1; // only grades less than 65
        }                           // are failing grades
        else{
            failures = failures;
        }
    }
    average = total / numGrades;
    printf("Average = %.2lf\n", average);
    return failures;
}
// Main Function
int main()
{
    
    printf("Number of Failures = %d\n", Failures());
    return 0;
}
// Function Definitions


