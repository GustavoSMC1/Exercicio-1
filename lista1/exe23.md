#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double raio;
    
    cout << "Digite o raio do círculo: ";
    cin >> raio;
    
    double perimetro = 2 * M_PI * raio;
    
    cout << "Perímetro do círculo: " << perimetro << endl;
    
    return 0;
}
