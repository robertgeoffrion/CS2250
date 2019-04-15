/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/11/2019 11:09:23 AM
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
#include <vector>
#include "ItemToPurchase.h"
using namespace std;

class ShoppingCart{
    public:
    ShoppingCart();
    ShoppingCart(string name, string date);
    string GetCustomerName() const;
    string GetDate() const;
    void AddItems(ItemToPurchase item);
    void RemoveItems(string name);
    void ModifyItems(ItemToPurchase item);
    int  GetNumItemsInCart();
    double  GetCostOfCart();
    void PrintTotal();
    void PrintDescriptions();

    private:
    string customerName;
    string currentDate;
    vector <ItemToPurchase> cartItems;



};
