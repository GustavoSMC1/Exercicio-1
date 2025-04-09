#include <iostream>
using namespace std;

int main() {
    
    int numero, inteiro;
    
        cout<< "Digite um numero";
        cin>> numero;
            if ( numero >= 20 && numero <= 90) {
                cout << " o numero " << numero << " esta entre 20 e 90." << endl;
            }
            else {
                cout << " o numero " << numero << " nao esta entre 20 e 90 " << endl;
            }
    
    return 0;
}
