/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/11/2019 11:09:42 AM
 *       Revision:  none
 *       Compiler:  gcc
 *       Complier(C++): g++
 *         Author:  robert geoffrion (), robertgeoffrion78@gmail.com
 *   Organization:  WSU
 *
 * =====================================================================================
 */

//for C++ code
#include <iostream>
#include <string>
#include <vector>
#include "ShoppingCart.h"
using namespace std;

ShoppingCart::ShoppingCart(){
    customerName = "none";
    currentDate = "January 1, 2019";
}

ShoppingCart::ShoppingCart(string name,string date){
    name = GetCustomerName();
    date = GetDate();
}

string ShoppingCart::GetCustomerName()const{

    return customerName;
}
string ShoppingCart::GetDate()const{
    
    return currentDate;
}
void ShoppingCart::AddItems(ItemToPurchase Item){
    //string name;
    //string description;
    //int price;
    //int quantity;

    //cout << "Enter the item name:" << endl;
    //getline(cin, name);
    //Item.SetName(name);
    //cout << "Enter the item description:" << endl;
    //getline(cin, description);
    //Item.SetDescription(description);
    //cout << "Enter the item price:" << endl;
    //cin >> price;
    //Item.SetPrice(price);
    //cout << "Enter the item quantity:" << endl;
    //cin >> quantity;
    //Item.SetQuantity(quantity);

    cartItems.push_back(Item);
}
void ShoppingCart::RemoveItems(string name){
    unsigned i = 0;
    unsigned cartSize;
    bool found;
    cartSize = cartItems.size();
    found = false;

    for(i=0; i< cartSize; i++){
       if(cartItems.at(i).GetName() == name){
           cartItems.erase (cartItems.begin() + i);
            found = true;
       }

    }

    if(!found){
        cout << "Item not found in cart. Nothing removed." << endl;
    }

}
void ShoppingCart::ModifyItems(ItemToPurchase item){
    unsigned i;
    int itemPos;
    ItemToPurchase currItem;
    bool found;


    found = false;

    for(i=0; i<cartItems.size(); i++){
        if(cartItems.at(i).GetName() == item.GetName()){
            if(item.GetName() != "none" && item.GetDescription() != "none" && 
                    item.GetPrice() != 0 && item.GetQuantity() != 0){
                    found = true;
                    itemPos = i;
            }
        }
    }
    if(!found){
        cout << "Item not found in cart. Nothing modified" << endl;
    }
    else{
        cartItems[itemPos] = item;
    }

}
int ShoppingCart::GetNumItemsInCart(){
    unsigned i;
    int numItems =0;
    for(i =0; i< cartItems.size(); i++){
        numItems += cartItems[i].GetQuantity();
    }

    return numItems;
}
double ShoppingCart::GetCostOfCart(){
    unsigned i =0;
    int totalCost;
    totalCost = 0;

    for (i=0; i< cartItems.size(); i++){

            totalCost +=  cartItems.at(i).GetQuantity() * cartItems.at(i).GetPrice();

    }


    return totalCost;
}
void ShoppingCart::PrintTotal(){
    unsigned i;
    int totalCost;
    totalCost =0;
    cout << customerName << "'s Shpping Cart - " << currentDate << endl;
    cout << "Number of Items: " << GetNumItemsInCart() << endl << endl;

    if (cartItems.size() > 0){
        for(i = 0; i<cartItems.size(); i++){
            cartItems.at(i).PrintItemCost();
        }
    }
    else{
        cout << "SHOPPING CART IS EMPTY" << endl;

    }
    totalCost = GetCostOfCart();
    cout << endl << "Total: $" << totalCost << endl;
}
void ShoppingCart::PrintDescriptions(){
    unsigned i;

    cout << customerName << "'s Shopping Cart - " << currentDate << endl << endl;
    cout << "Item Descriptions" << endl;

    if(cartItems.size() > 0){
        for(i = 0; i< cartItems.size(); i++){
            cartItems.at(i).PrintItemDescription();
        }
    }
    else{
        cout << "SHOPPING CART IS EMPTY" << endl;
    }
}

