#include <iostream>
using namespace std;

int main() {
    
    int numero, inteiro;
    
        cout<< "Digite um numero: ";
        cin>> numero;
            if ( numero > 20) {
                cout << " Numero é maior que 20 " << endl;
            }
            else if (numero ==20) {
                cout << "Numero é igual a 20" << endl;
            }
            else if (numero < 20){
                cout << " Numero é menor que 20" << endl;
            }
    return 0;
}
