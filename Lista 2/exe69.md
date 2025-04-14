    #include <iostream>

    using namespace std;

    int main() {
    int numero;

    cout << "Digite um número: ";
    cin >> numero;

    if (numero == 5) {
        cout << "O número é igual a 5." << endl;
    } else if (numero == 200) {
        cout << "O número é igual a 200." << endl;
    } else if (numero == 400) {
        cout << "O número é igual a 400." << endl;
    } else if (numero >= 500 && numero <= 1000) {
        cout << "O número está no intervalo entre 500 e 1000, inclusive." << endl;
    } else {
        cout << "O número não se enquadra em nenhum dos escopos anteriores." << endl;
    }

    return 0;
    }
