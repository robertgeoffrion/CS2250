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
    ItemDescription = "none";
    ItemPrice = 0;
    ItemQuantity = 0;
}
ItemToPurchase::ItemToPurchase(string name, string description, int price, int quantity){
    ItemName = name;
    ItemDescription = description;
    ItemPrice = price;
    ItemQuantity = quantity;
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
int ItemToPurchase::GetPrice() const{
return ItemPrice;
}

void ItemToPurchase::SetQuantity(int quantity){
ItemQuantity = quantity;
}

int ItemToPurchase::GetQuantity()const{
return ItemQuantity;
}
void ItemToPurchase::SetDescription(string description){
ItemDescription = description;
}

string ItemToPurchase::GetDescription()const{
return ItemDescription;
}

void ItemToPurchase::PrintItemCost(){

    cout << ItemName << " " << ItemQuantity << " @ " << ItemPrice << " = $"  << ItemQuantity*ItemPrice << endl;
}

void ItemToPurchase::PrintItemDescription(){

    cout << ItemName << ": " << ItemDescription <<  endl;
}
// Main Function

// Function Definitions


