#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double numero;
    
    cout << "Digite um número: ";
    cin >> numero;
    
    double quadrado = pow(numero, 2);
    double raiz_quadrada = sqrt(numero);
    
    cout << "O quadrado de " << numero << " é: " << quadrado << endl;
    cout << "A raiz quadrada de " << numero << " é: " << raiz_quadrada << endl;
    
    return 0;
}
