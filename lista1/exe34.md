#include <iostream>
using namespace std;

int main() {
    int numerador, denominador;
    
   
    cout << "Digite o numerador da fração: ";
    cin >> numerador;
    
    cout << "Digite o denominador da fração: ";
    cin >> denominador;
    
   
    if (denominador == 0) {
        cout << "Erro! O denominador não pode ser zero." << endl;
    } else {

        double resultado = static_cast<double>(numerador) / denominador;
        

        cout << "O valor decimal da fração é: " << resultado << endl;
    }
    
    return 0;
}
