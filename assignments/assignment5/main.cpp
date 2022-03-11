#include "account.h"
#include <iostream>
#include <iomanip>

using namespace std;

void display(Account);

int main() {
    Account client = Account();
    display(client);

    cout << boolalpha;

    {
        client.deposit(100);
        client.setInterestRate(.0875);
        display(client);
    }

    {
        cout << "Can withdraw 50?: " << client.canWithdraw(50) << endl;
        client.withdraw(50);
        display(client);
    }

    {
        cout << "Can withdraw 500?: " << client.canWithdraw(500) << endl;
        client.withdraw(500);
        display(client);
    }

    return 0;
}

void display(Account client){
    cout
        << "Balance:  $" << client.getBalance() << endl
        << "Rate:      " << (client.getInterestRate() * 100) << '%' << endl
        << "Interest: $" << client.calculateInterest() << endl
        << "================" << endl;
}