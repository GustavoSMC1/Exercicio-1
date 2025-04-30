    #include <iostream>
    
    using namespace std;
    
    int main() {
        int numero, limite;
        char continuar;

    do {
        cout << "Digite o número da tabuada que deseja ver: ";
        cin >> numero;

        cout << "Até qual número deseja multiplicar? ";
        cin >> limite;

        cout << "\nTabuada do " << numero << " até " << limite << ":\n";

        for (int i = 1; i <= limite; i++) {
            cout << numero << " x " << i << " = " << numero * i << endl;
        }

        
        cout << "\nDeseja ver outra tabuada? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    cout << "Programa encerrado.\n";
    return 0;
    }
