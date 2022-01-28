#include <iostream>

using namespace std;

/**
 * Write a program that asks the user to enter the price of an item and
 * the quantity, then calculate the subtotal, taxes and the total using
 * NY sales tax constant rate. The program should accept only positive
 * values for the price and the quantity, display an error message otherwise.
 */

const float TAX = .08;

float round(float);

int main() {
    float price;
    int quantity;

    // price
    cout << "Price: $";
    cin >> price;
    if(!cin.good() || price <= 0){
        cout << "ERR: Price must be a number that is greater than 0";
        return -1;
    }

    // quantity
    cout << "Quantity:";
    cin >> quantity;
    if(!cin.good() || quantity <= 0){
        cout << "ERR: Quantity must be a number that is greater than 0";
        return -1;
    };

    // totals
    const float subtotal = price * quantity;
    const float taxes    = subtotal * TAX;
    const float total    = subtotal + taxes;

    cout << "Subtotal: $" << round(subtotal) << endl;
    cout << "Taxes (" << (TAX * 100) << "%): $" << round(taxes) << endl;
    cout << "Total: $" << round(total);

    return 0;
}

float round(float f){
    return int(f * 100) / 100.0;
}