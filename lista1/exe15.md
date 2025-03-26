#include <iostream>
using namespace std;


int main() {
  int num1, peso1, num2, peso2, num3, peso3, num4, peso4;
    double media;
    
    cout << "digite o primeiro numero";
    cin >> num1;
     cout << "Digite o peso do primeiro número: ";
    cin >> peso1;
    
    cout << "digite o segundo numero";
    cin >> num2;
     cout << "Digite o peso do segundo número: ";
     cin >> peso2;
     
    cout << "digite o terceiro numero";
    cin>> num3;
    cout << "Digite o peso do terceiro número: ";
    cin >> peso3;
    
    cout << "digite o quarto numero"; 
    cin>> num4;
    cout << "Digite o peso do quarto número: ";
    cin >> peso4;
    
    media = (num1 * peso1 + num2 * peso2 + num3 * peso3 + num4 * peso4) /
            (peso1 + peso2 + peso3 + peso4);

    
    cout << "media e" << media << endl;
        return 0;
}
