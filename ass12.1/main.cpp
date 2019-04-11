/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/11/2019 08:54:49 AM
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


// Main Function
int main(){
    ItemToPurchase Item1;
    ItemToPurchase Item2;
    string Item = "";
    int count = 0;
    int price = 0;

    cout << "Item 1" << endl;
    cout << "Enter the item name:" << endl;
    getline(cin, Item);
    cout << "Enter the item price:" << endl;
    cin >> price;
    //cin.ignore(500, '\n');
    cout << "Enter the item quantity:" << endl;
    cin >> count; 
    cout << Item << price << count << endl;

    Item1.SetName(Item);
    Item1.SetPrice(price);
    Item1.SetQuantity(count);
    cin.ignore();
    cout << endl;
    cout << "Item 2" << endl;
    cout << "Enter the item name:" << endl;
    getline(cin, Item);
    //cin.ignore();
    cout << "Enter the item price:" << endl;
    cin >> price;
    //cin.ignore(500, '\n');
    cout << "Enter the item quantity:" << endl;
    cin >> count;
    Item2.SetName(Item);
    Item2.SetPrice(price);
    Item2.SetQuantity(count);
    cin.ignore();
    cout << Item1.GetName() << " " << Item1.GetQuantity() << " @ $" << Item1.GetPrice() << " = $" << Item1.GetQuantity() * Item1.GetPrice() << endl;
    cout << Item2.GetName() << " " << Item2.GetQuantity() << " @ $" << Item2.GetPrice() << " = $" << Item2.GetQuantity() * Item2.GetPrice() << endl;
    cout << endl;
    cout << "Total: $" << Item1.GetPrice() * Item1.GetQuantity() + Item2.GetPrice() * Item2.GetQuantity() << endl;
    return 0;
}
