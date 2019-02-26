/*
 * =====================================================================================
 *
 *       Filename:  warmup.8.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/26/2019 09:06:00 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  robert geoffrion (), robertgeoffrion78@gmail.com
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>


// Constants

// Function Prototypes
int GetNumOfCharecters(const char usrStr[]){
    int numChars = 0;
    for(int i = 1; i <= strlen(usrStr); ++i){
        numChars = numChars + 1;
    }
    
    return numChars;
}
void OutputWithoutWhitespace(const char usrStr[]){
    int i, index = 0;
    char newStr[100];
    for(i = 0; i < 100; ++i){
        if(usrStr[i] == ' '|| usrStr[i] == '\t'){
           continue;
        }
        else{
            newStr[index] = usrStr[i];
            index++;
        }
    }
    printf("%s", newStr);
}
// Main Function
int main()
{
    char usrStr[100];
    printf("please enter a string: ");
    fgets(usrStr, 100, stdin);
    printf("you entered: %s\n", usrStr);

    printf("Number of charecters: %d\n",    GetNumOfCharecters(usrStr));


    OutputWithoutWhitespace(usrStr);


    return 0;
}
// Function Definitions


