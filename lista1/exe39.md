#include <iostream>
using namespace std;

int main() {
    double num1, num2;


    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite o segundo número: ";
    cin >> num2;


    double quadradoDaDiferenca = (num1 - num2) * (num1 - num2);

 
    double diferencaDosQuadrados = (num1 * num1) - (num2 * num2);


    cout << "O quadrado da diferença (num1 - num2)²: " << quadradoDaDiferenca << endl;
    cout << "A diferença dos quadrados (num1² - num2²): " << diferencaDosQuadrados << endl;

    return 0;
}
