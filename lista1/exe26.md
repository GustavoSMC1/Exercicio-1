#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double cateto1, cateto2;
    
    cout << "Digite o valor do primeiro cateto: ";
    cin >> cateto1;
    
    cout << "Digite o valor do segundo cateto: ";
    cin >> cateto2;
    
    double hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
    
    cout << "A hipotenusa é: " << hipotenusa << endl;
    
    return 0;
}
