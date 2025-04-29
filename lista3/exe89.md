    #include <iostream>
    using namespace std;
    
    int main() {
        int quantidade;
        int numero;
        int maior;

    cout << "Quantos números você deseja digitar? ";
    cin >> quantidade;

    if (quantidade <= 0) {
        cout << "Quantidade inválida!" << endl;
        return 1;
    }

    cout << "Digite os números:" << endl;
    for (int i = 0; i < quantidade; ++i) {
        cin >> numero;

        if (i == 0 || numero > maior) {
            maior = numero;
        }
    }

    cout << "O maior número digitado foi: " << maior << endl;

    return 0;
    }
