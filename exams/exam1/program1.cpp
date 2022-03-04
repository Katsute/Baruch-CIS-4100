#include <iostream>

using namespace std;

/**
 * I. Write a C++ program to:
 * (1) display a hot beverage menu and
 * (2) prompts the user to make a selection.
 * (3) A switch statement determines which item the user has chosen.
 * (4) A do-while loop repeats until the user selects item X from the menu to exit,
 *     (5) any other selection should display the item selected and the price.
 *         The choices and prices are:
 *         - Coffee         $1.00
 *         - Tea            $ .75
 *         - Hot Chocolate  $1.25
 *         - Cappuccino     $2.50
 *         - Latte          $3.75
 */
int main() {

    char choice;

    do{
        // (1) display menu
        cout
            << "Menu:" << endl
            << "1. Coffee" << endl
            << "2. Tea" << endl
            << "3. Hot Chocolate" << endl
            << "4. Cappuccino" << endl
            << "5. Latte" << endl
            << "X to exit" << endl;

        // (2) prompt selection
        cout << "Enter your choice:";
        cin >> choice;
        cout << endl;

        // (5) other selection display item and price
        if(cin.good() && tolower(choice) != 'x'){
            // (3) switch selection
            switch(tolower(choice)){
                case '1':
                    cout << "Coffee: $1.00" << endl;
                    break;
                case '2':
                    cout << "Tea: $0.75" << endl;
                    break;
                case '3':
                    cout << "Hot Chocolate: $1.25" << endl;
                    break;
                case '4':
                    cout << "Cappuccino: $2.50" << endl;
                    break;
                case '5':
                    cout << "Latte: $3.75" << endl;
                    break;
            }
        }

        cout << endl;

        // (4) do while not 'x'
    }while(tolower(choice) != 'x');

    return 0;
}