#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {

    private:
        double balance;
        double rate;

    public:
        Account();
        Account(double, double);
        void setInterestRate(double);
        double getInterestRate() const;
        double calculateInterest() const;

        void deposit(double);
        void withdraw(double);
        bool canWithdraw(double) const;
        double getBalance() const;

};

#endif