    #include <iostream>
    
    using namespace std;
    
    unsigned long long fatorial(int n) {
        unsigned long long resultado = 1;
        for (int i = 1; i <= n; i++) {
            resultado *= i;
        }
        return resultado;
    }
    
    int main() {
        int numero;

    while (true) {
        cout << "Digite um número inteiro (menor que 1 para encerrar): ";
        cin >> numero;

        if (numero < 1) {
            cout << "Encerrando o programa.\n";
            break;
        }

        cout << "Fatorial de " << numero << " é: " << fatorial(numero) << "\n\n";
    }

    return 0;
    }
