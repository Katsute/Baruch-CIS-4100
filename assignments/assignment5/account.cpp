#include "account.h"

Account::Account(){
    balance = rate = 0;
}

void Account::setInterestRate(double rate){
    this->rate = rate;
}

double Account::getInterestRate(){
    return rate;
}

double Account::calculateInterest(){
    return balance * rate;
}

void Account::deposit(double amount){
    balance += amount;
}

void Account::withdraw(double amount){
    if(canWithdraw(amount))
        balance -= amount;
}

bool Account::canWithdraw(double amount){
    return balance >= amount;
}

double Account::getBalance(){
    return balance;
}