    #include <iostream>
    #include <cmath>  
    using namespace std;

    int main() {
    int numero;
    int soma = 0;

    cout << "Digite 20 números:" << endl;

    
    for (int i = 1; i <= 20; ++i) {
        cout << "Número " << i << ": ";
        cin >> numero;

        
        if (pow(numero, 2) < 225) {
            soma += numero;  
        }
    }

    cout << "Somatório dos números cujo quadrado é inferior a 225: " << soma << endl;

    return 0;
    }
