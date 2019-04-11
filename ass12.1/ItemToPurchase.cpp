/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.cpp
 *
 *    Description:  :wq
 *
 *
 *
 *        Version:  1.0
 *        Created:  04/11/2019 08:55:11 AM
 *       Revision:  none
 *       Compiler:  gcc
 *       Complier(C++): g++
 *         Author:  robert geoffrion (), robertgeoffrion78@gmail.com
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// Constants

// Function Prototypes

//for C++ code
#include <iostream>
#include <string>
#include "ItemToPurchase.h"
using namespace std;

ItemToPurchase::ItemToPurchase(){
    ItemName = "none";
    ItemPrice = 0;
    ItemQuantity = 0;
}
void ItemToPurchase::SetName(string name){
ItemName = name;
}

string ItemToPurchase::GetName(){
return ItemName;
}

void ItemToPurchase::SetPrice(int price){
ItemPrice = price;
}
int ItemToPurchase::GetPrice(){
return ItemPrice;
}

void ItemToPurchase::SetQuantity(int quantity){
ItemQuantity = quantity;
}

int ItemToPurchase::GetQuantity(){
return ItemQuantity;
}
// Main Function

// Function Definitions


