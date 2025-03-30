#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double angulo;
    
    cout << "Digite um ângulo em graus: ";
    cin >> angulo;
    
    double radianos = angulo * M_PI / 180.0;
    
    double seno = sin(radianos);
    double cosseno = cos(radianos);
    double tangente = tan(radianos);
    double secante = 1 / cosseno;
    double cossecante = 1 / seno;
    double cotangente = 1 / tangente;
    
    cout << "Seno: " << seno << endl;
    cout << "Co-seno: " << cosseno << endl;
    cout << "Tangente: " << tangente << endl;
    cout << "Secante: " << secante << endl;
    cout << "Co-secante: " << cossecante << endl;
    cout << "Co-tangente: " << cotangente << endl;
    
    return 0;
}
