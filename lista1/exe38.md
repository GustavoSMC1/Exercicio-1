#include <iostream>
using namespace std;

int main() {
    double salario, salarioMinimo;

 
    cout << "Digite o valor do salário mínimo: ";
    cin >> salarioMinimo;


    cout << "Digite o salário da pessoa: ";
    cin >> salario;


    double salariosMinimos = salario / salarioMinimo;


    cout << "O salário corresponde a " << salariosMinimos << " salários mínimos." << endl;

    return 0;
}
