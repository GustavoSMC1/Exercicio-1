#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double base, altura;
    
    cout << "Digite a base do retângulo: ";
    cin >> base;
    
    cout << "Digite a altura do retângulo: ";
    cin >> altura;
    
    double perimetro = 2 * (base + altura);
    double area = base * altura;
    double diagonal = sqrt(pow(base, 2) + pow(altura, 2));
    
    cout << "Perímetro: " << perimetro << endl;
    cout << "Área: " << area << endl;
    cout << "Diagonal: " << diagonal << endl;
    
    return 0;
}
