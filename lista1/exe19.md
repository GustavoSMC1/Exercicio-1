#include <iostream>

using namespace std;

int main() {
    double saldo;
    
    cout << "Digite o saldo da aplicação: ";
    cin >> saldo;
    
    double novo_saldo = saldo * 1.01;
    
    cout << "O novo saldo, com reajuste de 1%, é: " << novo_saldo << endl;
    
    return 0;
}
