#include <iostream>
using namespace std;

int main() {
    double valorDespesas, valorTotal;

  
    cout << "Digite o valor gasto com as despesas: ";
    cin >> valorDespesas;

    double gorjeta = valorDespesas * 0.10;


    valorTotal = valorDespesas + gorjeta;

    cout << "Valor da gorjeta (10%): " << gorjeta << endl;
    cout << "Valor total com a gorjeta: " << valorTotal << endl;

    return 0;
}
