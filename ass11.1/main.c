/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/02/2019 09:07:20 AM
 *       Revision:  none
 *       Compiler:  gcc
 *       Complier(C++): g++
 *         Author:  robert geoffrion (), robertgeoffrion78@gmail.com
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Constants

// Function Prototypes

//for C++ code
//#include <iostream>
//using namespace std;


// Main Function
int main(void)
{
    int i, j, IJ, index=0;
    char STR[50];
    char NWS[50];
    char NWSTR[2][50];
//    char FW[50];
//    char SW[50];
while(STR[0] != 'q'){
     printf("Enter input string:\n");
    fgets(STR, 50, stdin);
    j = 1;
    if(STR[0] == 'q'){
        goto done;
    }
    while(j == 1){
        for(i=0;i< strlen(STR);++i){
            if (STR[i] != ','){
            }
            else{
                goto done;
            }
        }
        printf("Error: no comma in string.");
        fgets(STR, 50, stdin);

    }
done:
        for(i=0;i< strlen(STR);++i){
            if (STR[i] == ' ' || STR[i] == '\0'){
                continue;
            }
            else{
                NWS[index] = STR[i];
                index++;
            }
        }

    IJ =0;
    j = 0;
    for(i=0;i<=strlen(NWS);i++){
        if( NWS[i] == ','){
        //if( STR[i+1] == ' ' || STR[i] == '\0'){
        //    i++;
        //}
            IJ++;
            j = 0;
        }
        else{
         NWSTR[IJ][j] = NWS[i];
         j++;
        }
    }



    printf("First word: %s\n", NWSTR[0]);
    printf("Second word: %s\n", NWSTR[1]);
}
    return 0;

}
// Function Definitions


