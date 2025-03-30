#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double numero, base;
    
    cout << "Digite o número: ";
    cin >> numero;
    
    cout << "Digite a base do logaritmo: ";
    cin >> base;
    
    if (numero > 0 && base > 0 && base != 1) {
        double logaritmo = log(numero) / log(base);
        cout << "O logaritmo de " << numero << " na base " << base << " é: " << logaritmo << endl;
    } else {
        cout << "Valores inválidos! O número e a base devem ser positivos, e a base diferente de 1." << endl;
    }
    
    return 0;
}
