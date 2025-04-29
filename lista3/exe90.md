    #include <iostream>
    using namespace std;
    
    int main() {
        int quantidade;
        int numero;
        int maior, menor;

    cout << "Quantos números você deseja digitar? ";
    cin >> quantidade;

    if (quantidade <= 0) {
        cout << "Quantidade inválida!" << endl;
        return 1;
    }

    cout << "Digite os números:" << endl;

    for (int i = 0; i < quantidade; ++i) {
        cin >> numero;

        if (i == 0) {
            maior = menor = numero;  
        } else {
            if (numero > maior)
                maior = numero;
            if (numero < menor)
                menor = numero;
        }
    }

    cout << "\nMaior número digitado: " << maior << endl;
    cout << "Menor número digitado: " << menor << endl;

    return 0;
    }
