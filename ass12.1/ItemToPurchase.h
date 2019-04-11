/*
 * =====================================================================================
 *
 *       Filename:  ItmeToPurchase.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/11/2019 08:55:52 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  robert geoffrion (), robertgeoffrion78@gmail.com
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>
using namespace std;
#ifndef  ITMETOPURCHASE__INC__
#define  ITMETOPURCHASE_INC_

class ItemToPurchase{
private:
string ItemName;
int ItemPrice;
int ItemQuantity;

public:
ItemToPurchase();
void SetName(string ItemName);
string GetName();
void SetPrice(int ItemPrice);
int GetPrice();
void SetQuantity(int ItemQuantity);
int GetQuantity();
};

#endif /* ----- #ifndef ITMETOPURCHASE__INC__ ----- */

