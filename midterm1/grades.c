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

printf("How many grades do you want to input?");
scanf("%d", &numGrades);
double grades[numGrades + 1];
    for (int i = 1; i <= numGrades; ++i){
        printf("Enter grade #%d", i);
        scanf("%lf", grades[i]);
        total = total + grades[i];
        if(grades[i] < 65){
            failures = failures +1;
        }
        else{
            failures = failures;
        }
    }
    average = total / numGrades;
    printf("Average = %lf\n", average);
    return failures;
}
// Main Function
int main()
{
    
    return 0;
}
// Function Definitions


