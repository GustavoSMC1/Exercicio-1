#include <iostream>
using namespace std;

int main() {
    double deposito, taxaJuros, rendimento, valorTotal;


    cout << "Digite o valor do depósito: ";
    cin >> deposito;

    cout << "Digite a taxa de juros (em %): ";
    cin >> taxaJuros;


    rendimento = deposito * (taxaJuros / 100);


    valorTotal = deposito + rendimento;


    cout << "Rendimento: " << rendimento << endl;
    cout << "Valor total (depósito + rendimento): " << valorTotal << endl;

    return 0;
}


