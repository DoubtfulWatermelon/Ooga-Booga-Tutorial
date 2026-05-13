#include <iostream>

class BankAccount {
    private:
        double balance;
    public:
        BankAccount() { balance = 0.0; }

        void Deposit(double amount);

        void Withdraw(double amount);

        double GetBalance();
};

void BankAccount::Deposit(double amount){
    balance= balance+ amount;
}

void BankAccount::Withdraw(double amount){
    if(amount> balance){
        std::cout<< "\nInsufficient funds.";
    } else{ 
        balance= balance- amount;
    }
}

double BankAccount::GetBalance(){
    return balance;
}

int main(){
    BankAccount wallet;

    std::cout<<"Hello World!"<<std::endl;

    wallet.Deposit(1000);
    std::cout<< "\nCurrent balance: "<< wallet.GetBalance();
    wallet.Withdraw(500);
    std::cout<< "\nCurrent balance: "<< wallet.GetBalance();
    wallet.Withdraw(600);
    std::cout<< "\nCurrent balance: "<< wallet.GetBalance();


    return 0;
}