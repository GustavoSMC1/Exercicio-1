#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double raio, altura;
    
    cout << "Digite o valor do raio da lata de óleo: ";
    cin >> raio;
    
    cout << "Digite o valor da altura da lata de óleo: ";
    cin >> altura;
    
    double volume = 3.14159 * pow(raio, 2) * altura;
    
    cout << "O volume da lata de óleo é: " << volume << " unidades cúbicas" << endl;
    
    return 0;
}
