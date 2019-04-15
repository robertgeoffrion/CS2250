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
#include <iomanip>
#include "ShoppingCart.h"

using namespace std;

char PrintMenu(ShoppingCart& theCart);

int main(){
    string custName;
    string today;
    char menuChoice;

    cout << "Enter customer's name:" << endl;
    getline(cin, custName);
    cin.ignore();

    cout << "Enter today's date:" << endl;
    getline(cin, today);
    cin.ignore();
    cout << endl;

    cout << "Customer name: " << custName << endl;
    cout << "Today's date: " << today << endl << endl;

    ShoppingCart theCart(custName, today);


    menuChoice = ' ';
    while(menuChoice != 'q'){
        menuChoice = PrintMenu(theCart);
    }

    return 0;
}

char PrintMenu(ShoppingCart& theCart){
    char menuOP;
    string name;
    string descr;
    int price;
    int quantity;
    ItemToPurchase* Item = NULL;

    cout << "Menu" << endl;
    cout << "a - Add item to cart" << endl;
    cout << "d - Remove item from cart" << endl;
    cout << "c - Change Item quantity" << endl;
    cout << "i - Output item's descriptions" << endl;
    cout << "o - Output shopping cart" << endl;
    cout << "q - Quit" << endl << endl;

    menuOP = ' ';

    while(menuOP != 'a' && menuOP != 'd' && menuOP != 'c' &&
            menuOP != 'i' && menuOP != 'o' && menuOP != 'q'){
        cout << "Choose an option:" << endl;
        cin >> menuOP;
    }

        switch(menuOP){
            case 'a':{
                cin.ignore();

                cout << "ADD ITEM TO CART" << endl;
    Item = (ItemToPurchase*)malloc(sizeof(ItemToPurchase));
    cout << "Enter the item name:" << endl;
    getline(cin, name);
    Item->SetName(name);
    cout << "Enter the item description:" << endl;
    getline(cin, descr);
    Item->SetDescription(descr);
    cout << "Enter the item price:" << endl;
    cin >> price;
    Item->SetPrice(price);
    cout << "Enter the item quantity:" << endl;
    cin >> quantity;
    Item->SetQuantity(quantity);

    theCart.AddItems(*Item);

                menuOP = ' ';
                cout<< endl;
            }
            break;
            case 'd':{
                cin.ignore();

                cout << "REMOVE ITEM FROM CART" << endl;
                cout << "Enter the name of item to remove:" << endl;
                getline(cin, name);
                cin.ignore();
                theCart.RemoveItems(name);

                menuOP = ' ';
                cout << endl;
            }
            break;
            case 'c':{
                cin.ignore();

                cout << "CHANGE ITEM QUANTITY" << endl;
                cout << "Enter the item name:" << endl;
                getline(cin, name);
                cin.ignore();
                theCart.ModifyItems(*Item);
                cout << "Enter the new quantity:" << endl;
                cin >> quantity;
                //theCart.ModifyItems();

                menuOP = ' ';
                cout << endl;
            }
            break;
            case 'i':{
                cin.ignore();

                cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
                theCart.PrintDescriptions();

                menuOP = ' ';
                cout << endl;
            }
            break;
            case 'o':{
                cin.ignore();

                cout << "OUTPUT SHOPPING CART" << endl;
                theCart.PrintTotal();

                menuOP = ' ';
                cout << endl;
            }
            break;
        }
        return menuOP;
}
