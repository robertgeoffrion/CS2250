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
string ItemDescription;
int ItemPrice;
int ItemQuantity;

public:
ItemToPurchase();
ItemToPurchase(string name, string description, int price, int quantity);

void SetName(string name);
string GetName();
void SetPrice(int price);
int GetPrice() const;
void SetQuantity(int quantity);
int GetQuantity() const;
void SetDescription(string description);
string GetDescription() const;
void PrintItemCost();
void PrintItemDescription();

};

#endif /* ----- #ifndef ITMETOPURCHASE__INC__ ----- */

