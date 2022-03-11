#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {

    private:
        double balance;
        double rate;

    public:
        Account();
        void setInterestRate(double);
        double getInterestRate();
        double calculateInterest();

        void deposit(double);
        void withdraw(double);
        bool canWithdraw(double);
        double getBalance();

};

#endif