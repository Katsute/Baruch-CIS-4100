#include "account.h"

Account::Account(){
    balance = rate = 0;
}

Account::Account(double balance, double rate) {
    this->balance = balance;
    this->rate = rate;
}

void Account::setInterestRate(double rate) {
    this->rate = rate;
}

double Account::getInterestRate() const {
    return rate;
}

double Account::calculateInterest() const {
    return balance * rate;
}

void Account::deposit(double amount) {
    if(amount > 0)
        balance += amount;
}

void Account::withdraw(double amount) {
    if(canWithdraw(amount))
        balance -= amount;
}

bool Account::canWithdraw(double amount) const {
    return balance >= amount;
}

double Account::getBalance() const {
    return balance;
}