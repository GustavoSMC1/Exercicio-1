#include <iostream>
using namespace std;

int main() {
   int numeros[4];
    int soma = 0;
     
       cout << "Digite 4 numeros inteiros:\n";
    for (int i = 0; i < 4; i++) {
        cin >> numeros[i];
        soma += numeros[i];
        }
            cout << "Numeros digitados: ";
            for (int i = 0; i < 4; i++){
                cout << numeros[i] << " ";
            }
                cout << "A soma dos numeros é : " << soma << endl;
        
    return 0;
}
