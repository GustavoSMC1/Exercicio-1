#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double valorMensal, taxa, valorAcumulado;
    int meses;
    
   
    cout << "Calculadora de Poupança Programada\n";
    cout << "---------------------------------\n";
    cout << "Digite o valor da aplicação mensal: ";
    cin >> valorMensal;
    
    cout << "Digite a taxa de juros mensal (em decimal, ex: 0.01 para 1%): ";
    cin >> taxa;
    
    cout << "Digite o número de meses: ";
    cin >> meses;
    
    
    if (taxa == 0) {
       
        valorAcumulado = valorMensal * meses;
    } else {
        valorAcumulado = valorMensal * ((pow(1 + taxa, meses) - 1)) / taxa;
    }
    
    
    cout << fixed << setprecision(2);
    cout << "\nResultado:\n";
    cout << "Valor acumulado após " << meses << " meses: R$ " << valorAcumulado << endl;
    
    return 0;
}
