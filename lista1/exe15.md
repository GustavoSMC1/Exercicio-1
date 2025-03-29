#include <iostream>

using namespace std;

int main() {
    double num1, num2, num3, num4;
    int peso1 = 1, peso2 = 2, peso3 = 3, peso4 = 4;
    
    cout << "Digite quatro números: ";
    cin >> num1 >> num2 >> num3 >> num4;
    
    double media_ponderada = (num1 * peso1 + num2 * peso2 + num3 * peso3 + num4 * peso4) / (peso1 + peso2 + peso3 + peso4);
    
    cout << "A média ponderada é: " << media_ponderada << endl;
    
    return 0;
}
