#include <iostream>
using namespace std;

class Conta {
private:
    double saldoConta;

public:
    Conta (double saldoInicial){
        if(saldoInicial >= 0){
            saldoConta = saldoInicial;
        } else {
            saldoConta = 0;
            cout << "Saldo invalido" << endl;
        }
    }
    
    void credito (double valor){
        saldoConta += valor;
    }

    void debito(double valor){
        if(valor > saldoConta){
            cout << "Saldo insuficiente" << endl;
        } else {
            saldoConta -= valor;
        }
    }

    double getSaldo() const {
        return saldoConta;
    }
};


int main(){

    Conta conta1(1000);
    Conta conta2(-500);

    conta1.credito(500);
    conta1.debito(200);
    
    conta2.credito(300);
    conta2.debito(1000);

    cout << "Saldo conta 1: " << conta1.getSaldo() << endl;
    cout << "Saldo conta 2: " << conta2.getSaldo() << endl;

    return 0;
}