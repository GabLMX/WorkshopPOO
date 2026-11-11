#include <iostream>

//On aurait dû utiliser l'encapsulation pour faire un fichier .cpp (et .hpp associé) pour BankAccount et Transaction.
//Comme ça, on peut se concentrer sur faire fonctionner les services.
//Ici, il fallait que balance soit un attribut privé et qu'on ajoute des méthodes publiques pour accéder à la balance.

class BankAccount{
private:
    double balance; //Dangereux; si l'argent d'un compte est publique alors n'importe qui peut modifier le montant.

public:
    BankAccount(double balance) : balance(balance){}
    int getBal(){
        return this->balance;
    }
    void setBal(int montant){
        this->balance += montant;
    }
};

class Transaction{
private:
    BankAccount* from;
    BankAccount* to;
    double amount;

public:
    Transaction(BankAccount* from, BankAccount* to, double amount) : from(from), to(to), amount(amount){}
    bool execute(){

    from->setBal(-amount); //Ce serait mieux de changer pour vérifier si le virement est possible avant de toucher aux comptes.
    if (from->getBal() > 0) {
        to->setBal(amount);
        return true;
    }

    from->setBal(amount);
    return false; //On ne retournait pas l'argent en cas d'erreur.
}
};


int main(){
    BankAccount* account1 = new BankAccount(1000.0);
    BankAccount* account2 = new BankAccount(500.0);


    Transaction* transaction = new Transaction(account1, account2, 500.0);
    bool res = transaction->execute();
    if (res) {
        std::cout << "Transaction successful" << std::endl;
    }
    else {
        std::cout << "Transaction failed" << std::endl;
    }


    std::cout << account1->getBal() << std::endl;
    std::cout << account2->getBal() << std::endl;
    delete account1;
    delete account2;


    account1 = new BankAccount(1000.0);
    account2 = new BankAccount(500.0);
    transaction = new Transaction(account1, account2, 5000.0);
    res = transaction->execute();
    if (res) {
        std::cout << "Transaction successful" << std::endl;
    }
    else {
        std::cout << "Transaction failed" << std::endl;
    }


    std::cout << account1->getBal() << std::endl;
    std::cout << account2->getBal() << std::endl;


    return 0;
}