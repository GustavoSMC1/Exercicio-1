#include <iostream>

using namespace std;

int main()
{

    int numero;
    cout <<" Digite um numero ";
    cin >> numero;
   
    if (numero % 5 == 0) {
    
        cout << "O numero " << numero << " é divisível por 5." << endl;
    } else {
        cout << "O numero " << numero << " não é divisível por 5." << endl;
    }
    return 0;
}
